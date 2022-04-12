#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * Starting from 0, followed by a new line.
 * Return 0
 */
int main(void)
{
int c;

for (c = 48; c <= 57; c++)
{
putchar(c);
 
if (c == 57)
{
break;
}

putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
