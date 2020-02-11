#include "holberton.h"
/**
* print Holberton
 */

int main (void)

{
char *hb = "Holberton\n";

while (*hb)
  {
_putchar(*hb);
hb++;
}
return (0);
}
