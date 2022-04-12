#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
for (ch = 97; ch <= 102; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
