#include <stdio.h>
#include <unistd.h>


/*
 *man is a human being
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

int main()
{
	pid_t mypp = getpid();
	pid_t x = getppid();
	if (fork() == 0)
	printf("this is the child\n");
	if(fork())
	printf("After party\n");
return (0);	
}

