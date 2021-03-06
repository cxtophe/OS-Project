/**
 * \file stdio.h
 * \brief Display functions
 * \author Adrien Forest
 * \version 0.1
 * \date 24 Avril 2010
 */

#ifndef __STDIO_H
#define __STDIO_H

/**
 * \brief enum of the different outputs provided by the OS.
 */
enum
{
  CONSOLE,                      /*!< Output for the console */
  MALTA                         /*!< Output for the malta LCD */
};

 /**
 * \fn int print(char *str)
 * \brief Print the string str to the standard output.
 *
 * \param str the string to print
 * \return the error identifier in case of any failure
 */
int             print(char *str);

 /**
 * \fn int printn(void)
 * \brief Print the carriage return character.
 *
 * \return the error identifier in case of any failure
 */
int             printn(void);

 /**
 * \fn int printi(int n)
 * \brief Print the number n to the standard output.
 *
 * \param n the number to print
 * \return the error identifier in case of any failure
 */
int             printi(int n);

 /**
 * \fn int fprintf(int out, char *str)
 * \brief Print the string str to the specified output.
 *
 * \param ou the output where to print (0 = console, 1 = Malta)
 * \param str the string to print
 * \return the error identifier in case of any failure
 */
int             fprint(int out, char *str);

 /**
 * \fn char getc(void)
 * \brief Returns the character currently pointed by the internal file position indicator of the input stream
(keyboard).
 *
 * \param void
 * \return the character rade
 */
char            getc(void);

 /**
 * \fn int fgets(char *str, int num)
 * \brief Reads characters from stream and stores them as a string into str until (num-1) characters have been readen or either a newline or a the End-of-File is reached, whichever
comes first. stream (keyboard). A null character is added to the end.
 *
 * \param str the string rade from the input steam (keyboard)
 * \param num the number of characters to be rade
 * \return the error identifier in case of any failure
 */
int             gets(char *str, int num);

#endif //__STDIO_H
