#include <stdio.h>
/**
 * main - Print the alphabet in lowercase letters, except for e & q
 *
 * Description - using main function
 * it prints \"Programming is alphabet in lowercase letters, except for e & q
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)

if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
putchar('\n');
return (0);
}
