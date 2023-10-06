#include <stdio.h>

int main(void)
{
int lowercase = 97;
while ( lowercase <= 122)
{
if ( lowercase != 101 && lowercase != 113)
{
putchar(lowercase);
}
lowercase++;
}
return (0);
}  
