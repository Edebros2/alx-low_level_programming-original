#include "main.h"

/***
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}

}
