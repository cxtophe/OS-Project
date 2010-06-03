/**
 * @file ksleep.c
 * @brief Contains functions to manage sleeping process during time exception
 */

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "kprocess.h"
#include "debug.h"
#include "kernel.h"
#include "kinout.h"
#include "kscheduler.h"
#include "ksleep.h"

/**
 * @brief Decrement sleeping time of the process in plswaiting.
 *
 * If a process as to be waking up, he is moved to the plsready list.
 */
void
process_sleep()
{
  pls_item       *it, *last;

  /*
   * First : maybe we don't have anything to do ?
   */
  if (plswaiting.length == 0)
    return;

  /*
   * Ok the list contains stuff
   */
  last = NULL;
  it = plswaiting.start;

  //kprintln("Time to remove time");

  while (it != NULL)
  {
    /*
     * Is the pcb sleeping ?
     */
    if (pcb_get_state(&(it->p)) == SLEEPING)
    {
      pcb            *p = &(it->p);

      /*
       * Can we remove a QUANTUM from is sleeping time ?
       */
      if (pcb_get_sleep(p) >= QUANTUM)
        pcb_set_sleep(p, (pcb_get_sleep(p) - QUANTUM));

      else
      {
        /*
         * Oh did I wake you up ?
         */
        pcb_set_sleep(p, 0);
        pcb_set_state(p, READY);
        pls_move_pcb(&plswaiting, &plsready, p);

        /*
         * set it to the "real" next one but don't update last !
         */
        if (last == NULL)
          it = plswaiting.start;
        else
          it = last;

        continue;
      }
    }

    /*
     * These are not the droids you are looking for
     */
    last = it;
    it = last->next;
  }
}
