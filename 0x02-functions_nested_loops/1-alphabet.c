#include <stdio.h>
#include "main.h"
/**
 * main - Prints the lowercase letters of the alphabet followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
  	char letter;

	for (letter = a; letter <= z; letter++)
	  {
	    	putchar(letter);
	  }
	putchar('\n');
}
	  
