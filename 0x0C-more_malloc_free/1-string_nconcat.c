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
	unsigned int i, len, j;

	i = 0;
	len = 0;
	j = 0;
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[i])
	{
		i++; }
	while (s2[j])
	{
		j++; }
	if (n >= j)
	{
		len = i + j;
	} else
	{
		len = i + n; }
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
	{
		return (NULL); }
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++; }
	while (j <= n)
	{
		s3[i] = s2[j];
		i++;
		j++; }
	return (s3); }
