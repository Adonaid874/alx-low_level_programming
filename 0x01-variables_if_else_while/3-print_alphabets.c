#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	char q;
	char w;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}
	for (w = 'A'; w <= 'Z'; w++)
	{
		putchar(w);
	}
	putchar("\n");
	return (0);
}
