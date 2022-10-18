#include <stdio.h>
/**
  * main - Entry
  * print_until_newline - Character
  * @s: The string to be checked
  * Return: 0
  */
void print_until_newline(char *s);

int main(void)
{
	char s[] = "_putchar\n";

	print_until_newline(s);
	putchar('\n');

	return (0);
}
/**
 * print_until_newline - character
 * @s: The string to be checked
 */

void print_until_newline(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		putchar(s[i]);
		i++;
	}
}

