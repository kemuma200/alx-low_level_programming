#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, 
 *		including the terminating null byte
 *		 (\0), to the buffer pointed to by dest
 *@dest: new buffer
 *@src: copied string
 *Return: Pointer to desc
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
