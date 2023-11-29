#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *
 *
 *@argc: argumerment count
 *
 *
 *@argv: point to argument
 *
 *
 *Return: 0 for success
 *
 *
 *
 *
 *
 */


int main(int argc, char *argv[])
{
int f_x, f_y, closef1, closef2;
char *file1,  *file2;
int b_r, b_w;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];
b_r = 1024;

file1 = argv[1];
file2 = argv[2];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

if (!file1)
return (-1);

f_x = open(file1, O_RDONLY);
check_i_o_stat(f_x, -1, file1, 'O');
f_y = open(file2, O_WRONLY |O_CREAT | O_TRUNC, mode);
check_i_o_stat(f_y, -1, file2, 'W');
while (b_r == 1024)
{
b_r = read(f_y, buffer, sizeof(buffer));
if (b_r == -1)
check_i_o_stat(-1, -1, file1, 'O');

b_w = write(f_x, buffer, b_r);
if (b_w == -1)
check_i_o_stat(-1, -1, file2, 'W');

}
closef1 = close(f_x);
check_i_o_stat(closef1, f_y, NULL, 'C');
closef2 = close(f_y);
check_i_o_stat(closef2, f_y, NULL, 'C');
return (0);
}



/**
 *check_i_o_stat - checks for error
 *
 *
 *@stat: param
 *
 *@fd: file descriptor
 *
 *@filename: file name
 *
 *
 *@mode: mode of the file
 *
 */

void check_i_o_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", filename);
exit(99);
}
}
