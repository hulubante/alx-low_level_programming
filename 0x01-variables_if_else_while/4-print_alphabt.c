#include <stdio.h> 

/**
 * main - prints the alphabet is lowercase
 * followed by a new line, except q and e
 * Return: Always o (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch!= 'e' && ch != 'q')
		{
		 putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

