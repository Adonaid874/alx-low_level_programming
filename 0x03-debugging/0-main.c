#include "main.h"

/**
  * positive_or_negative - entry point
  * @i: entered variable
  * Return: 0
  */

void positive_or_negative(int i)
{
	int i = 0;

	if (i > 0)
	{printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
