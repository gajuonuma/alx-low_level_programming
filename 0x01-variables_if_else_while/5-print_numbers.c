#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0 to 9
 * Return: 0
 */
int main(void)
{
int b;
for (b = 0; b < 10; b++)
{
printf("%b", b);
}
printf("\n");
return (0);
}
