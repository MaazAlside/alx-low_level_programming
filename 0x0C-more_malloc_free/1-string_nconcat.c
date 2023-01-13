#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: string
 *@s2: string
 *@n: first n bytes of s2, and null terminated
 *Return: return concat string s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, len1, len2, j;
	int sign = n;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (sign >= len2)
	{
		sign = len2;
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	} else
	{
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < sign; j++)
		s3[i++] = s2[j];
	s3[i++] = '\0';
	return (s3);
}
