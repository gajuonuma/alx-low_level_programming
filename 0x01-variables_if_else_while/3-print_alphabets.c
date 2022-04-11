#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabets in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'A'; lower_case <= 'Z'; lower_case++)
{
putchar(upper_case);
}
for (upper_case = 'a'; upper_case <= 'z'; upper_case++)
{
putchar(lower_case);
}

putchar('\n');
return (0);
}
