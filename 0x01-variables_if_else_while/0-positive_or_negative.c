  
#include <stdlib.h>
#include <time.h>
/*if the number is postive, negative, or equal zero, main print that*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n>0)
    printf ("%i is positive. \n", n)
    else (n==0)
	   prinf ("%i is zero. \n", n)
      else (n<0)
	     prinf ("%i is negative \n", n)
  return (0);
}
