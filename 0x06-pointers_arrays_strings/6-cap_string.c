#include "main.h"

/**
 *cap_string - capitalizes string
 *@myString: string to be considered
 *Return: capitalized string
 */
char *cap_string(char *myString)
{
	int i, j;
	/* Special characters int  array */
	int special[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(myString + i) != '\0')
	{
		if (*(myString + i) >= 'a' && *(myString + i) <= 'z')
		{
			if (i == 0)
			{
				*(myString + i) = *(myString + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (special[j] == *(myString + i - 1))
					{
						*(myString + i) = *(myString + i) - 32;
					}
				}
			}
		}
		i++;
	}
	return (myString);
}
