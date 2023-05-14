#include <stdio.h>
#include <string.h>
#include "main.h"

void printReverse(char *s) 
{
    	int length = 0;

    	while (s[length] != '\0')
	{
		length++;
	}

    	for (int i = length - 1; i >= 0; i--) 
	{
        	_putchar(s[i]);
    	}

    _putchar('\n');
}
