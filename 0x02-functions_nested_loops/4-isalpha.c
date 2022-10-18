#include "main.h"
/**
  * _isalpha - checl if character is lower or uppercase
  * @c: character to be checked.
  * Return: 1 - if lowercase or uppercase, 0 - if not
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
