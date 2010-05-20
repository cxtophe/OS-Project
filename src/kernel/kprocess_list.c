/**
 * \file kprocess_list.c
 * \brief Process list management functions (definitions)
 * \author Christophe Carasco
 * \version 0.1
 * \date 20 mai 2010
 *
 */

#include "kprocess_list.h"

/**
 * \fn int create_pls(pls *ls)
 * \brief initialize a list of pcb
 *
 * \param ls a pointer to a list
 * \return an error code
 */
uint8_t
create_pls(pls * ls)
{

}

/**
 * \fn int rm_pls(pls *ls)
 * \brief delete a list of pcb
 *
 * \param ls a pointer to a list
 * \return an error code
 */
uint8_t
rm_pls(pls * ls)
{

}

/**
 * \fn int rm_from_pls(pcb *p, pls *ls)
 * \brief delete a pcb from a list and reorder the list
 *
 * \param p the pcb to remove
 * \param ls a pointer to a list
 * \return an error code
 */
uint8_t
rm_from_pls(pcb * p, pls * ls)
{

}

/**
 * \fn pcb* empty_space(pls *ls)
 * \brief return the first empty space in a process list
 *
 * \param ls a pointer to a list
 * \return the first empty pcb
 */
pcb            *
empty_space(pls * ls)
{

}

/**
 * \fn bool is_empty(pls *ls)
 * \brief Return whether the list is empty or not
 *
 * \param ls a pointer to the list
 * \return a boolean
 */
bool
is_empty(pcb * p)
{

}

/**
 * \fn pcb* search(int pid, pls *ls)
 * \brief search for a process in a list
 *
 * \param pid the pid ot the process to search
 * \param ls a pointer to the list
 * \return a pcb
 */
pcb            *
search(uint8_t pid, pls * ls)
{

}

/**
 * \fn pcb* searchall(int pid)
 * \brief search for a process in all the lists
 *
 * \param pid the pid ot the process to search
 * \return a pcb
 */
pcb            *
searchall(uint8_t pid)
{

}

/**
 * \fn int move(int pid, pls *src, pls *dest)
 * \brief move a process from a list to another (will search to ensure that the
 *			pcb is in the list)
 *
 * \param pid the pid ot the process to move
 * \param src the source list
 * \param dest the destination list
 * \return an error code
 */
uint8_t
move(uint8_t pid, pls * src, pls * dest)
{

}

/**
 * \fn int sort(pls *ls)
 * \brief sort a process list by priority (highest to lowest)
 *
 * \param ls the list to sort
 * \return an error code
 */
uint8_t
sort(pls * ls)
{

}