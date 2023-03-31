#include "main.h"

/**
 *string_toupper - converst string to uppercase
 *@myString: string to be considered
 *Return: reversed string
 */
char *string_toupper(char *myString)
{

	int i = 0;

	for (i = 0; *(myString + i) != '\0'; i++)
	{
		if (*(myString + i) <= 'z' && *(myString + i) >= 'a')
			*(myString + i) = *(myString + i) - 32;
	}
	return (myString);
}
