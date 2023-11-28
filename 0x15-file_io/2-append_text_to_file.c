#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *append_text_to_file - appends to a file
 *
 *
 *@filename: the name
 *
 *
 *@text_content: contents
 *
 *Return: 1 for success
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
int bytes;
int f_x;
int bit;
if (!filename)
return (-1);

f_x = open(filename, O_WRONLY | O_APPEND);

if (f_x == -1)
return (-1);

if (text_content)
{

for (bit = 0; text_content[bit]; bit++)
	;

bytes = write(f_x, text_content, bit);

if (bytes == -1)
return (-1);
}

close(f_x);

return (1);
}
