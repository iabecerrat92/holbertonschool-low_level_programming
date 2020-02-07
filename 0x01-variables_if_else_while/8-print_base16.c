#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char lwr;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (lwr = 'a'; lwr <= 'f'; lwr++)
		putchar(lwr);
	putchar('\n');

	return (0);
}
