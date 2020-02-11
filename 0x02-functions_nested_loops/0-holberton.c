#include "holberton.h"
/**
 * print Holberton
 */

int main(void)
{
char *prints = "Holberton\n";

while (*prints)
  {
_putchar(*prints);
prints++;
}
return (0);
}
