#include "main.h"

/**
 *string_toupper - capitilizes a sentence
 *
 *
 *@s: string
 *
 *
 *Return: transformed
 *
 *
 */

char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
s++;
}
return (s);
}
