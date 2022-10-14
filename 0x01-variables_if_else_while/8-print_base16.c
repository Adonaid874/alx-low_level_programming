#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	int i;
	char hexdecimal[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexdecimal[i]);
	}
	putchar('\n');
	return (0);
}
