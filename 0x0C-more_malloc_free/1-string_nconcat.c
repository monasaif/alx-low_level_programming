#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: pointer string 1
 * @s2: pointer string 2
 * @n: number of bytes
 *
 * Return:  pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = str[j];
			i++;
	}

	str[i] = '\0';
	return (str);
}
