#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
char alphabet;

for (alphabet = 122; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
