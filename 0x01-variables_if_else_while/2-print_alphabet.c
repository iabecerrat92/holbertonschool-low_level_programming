#include<stdio.h>
/**
 *main - entry point
 *
 *return: Always 0(success)
 */
int main(void)
{
	char lowr;

	for (lowr = 'a' ; lowr <= 'z'; lowr++)
		putchar(lowr);
	putchar('\n');

return (0);
}
