#include<stdio.h>
/**
 * main - print if the number is positive, or zero or negative
 *
 * Description: using the main function
 * this program prints "Program is postive or zero or negative"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
