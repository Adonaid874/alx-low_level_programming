#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	int k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
