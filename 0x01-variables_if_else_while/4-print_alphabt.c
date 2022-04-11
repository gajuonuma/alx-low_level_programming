#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)

{
char alphabet;

 for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');
return (0);
}
