#include "main.h"

void puts_half(char *str)
{
	int length = 0, i;

	// Count the number of characters in the string
	while (length >= 0)
	{
		if(str[length] == '\0')
			break;
		length++;
	}

	// Determine the starting index for printing
	if (length % 2 == 1)
		i = length / 2; // Odd
	else
		i = (length - 1) / 2; // Even

	// Print the second half of the string
	for (i++; i < length; i++)
		_putchar(str[i]);

	// Print a newline character
	_putchar('\n');
}

