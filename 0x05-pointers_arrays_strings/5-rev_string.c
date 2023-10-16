#include "main.h"

/**
 *rev_string - reverses a string
 *
 *
 *@s: the string
 *
 *Return:none
 *
 *
 *
 */

void rev_string(char *s)
{

char ver = s[0];
int counter = 0;
int i;
while (s[counter] != '\0')
{
counter++;
}
for (i = 0; i < counter; i++)
{
counter--;

ver = s[i];
s[i] = s[counter];
s[counter] = ver;
}
}
