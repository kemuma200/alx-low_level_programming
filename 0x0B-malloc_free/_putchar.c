#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes a character to stdout
 *@s: character to be considered
 *Return: 1 if successful, -1 if erroneous
 *
 */

int _putchar(char s)
{
  return (write(1,&s, 1));
}
