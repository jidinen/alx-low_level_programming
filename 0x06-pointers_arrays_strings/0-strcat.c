#include "main.h"

/**
 *_strcat - concanate two strings
 *
 *@dest: destinaton string
 *@src: source string
 *
 *
 *
 *
 *Return: Dest
 */
char *_strcat(char *dest, char *src)
{
int j = 0;
int i = 0;
while (dest[j] != '\0')
{
j++;
}
while (src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;

}
dest[j] = '\0';
return (dest);
}
