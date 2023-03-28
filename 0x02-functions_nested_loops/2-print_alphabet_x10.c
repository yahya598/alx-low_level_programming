#include "main.h"
/*
 * Write a function that prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int M ;
	M =0;
	while(M <9)
	{
		letter = "a";
		while(letter <= "z")
		{
			_putchar(letter);
			letter++;
		}
                _putchar("\n");
	    	M++;
	}	
}
