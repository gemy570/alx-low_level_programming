#include "main.h"
/**
 * leet - leet encodes a string into 1337
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
int i, j;
char *letters = "aAeEoOtTlL";
char *nums = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
		if (str[i] == letters[j])
		{
		str[i] = nums[j];
		break;
		}
	}
	}

return (str);
}
