#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *create_file - creates a new file
 *
 *
 *
 *@filename: name of the file
 *
 *
 *@text_content: contents to be written to the file
 *
 *Return: 1 for sucess
 *
 */

int create_file(const char *filename, char *text_content)
{
int b_r;
int b_w;
int fx;

b_w = strlen(text_content);

fx = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (filename == NULL)
{
return (-1);
}

if (fx == -1)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}


b_r = write(1, text_content, b_w);

if (b_r == -1)
return (-1);

close(fx);

return (1);

}
