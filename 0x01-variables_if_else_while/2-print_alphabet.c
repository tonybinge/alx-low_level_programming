#include<stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line
 * Description: using the main function
 * this program prints " Alphabets in lowercase, followed by a new line"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
