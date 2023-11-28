#include <stdio.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 *read_textfile - function that reads from a file
 *
 *
 *
 *@filename: the file to read from
 *
 *
 *@letters: to read
 *
 *
 *Return: the size of data read
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fx;
ssize_t b_w;
char *x;
ssize_t bit;


if (filename == NULL)
{
return (0);
}
fx = open(filename, O_RDONLY);

if (fx == -1)
{
return (0);
}
x = malloc(sizeof(char) * letters);
if (x == NULL)
{
close(fx);
return (0);
}
b_w = read(fx, x, letters);
close(fx);

if (b_w == -1)
{
free(x);
return (0);
}
bit =  write(STDOUT_FILENO, x, b_w);
free(x);
if (b_w != bit)
return (0);
return (bit);
}
