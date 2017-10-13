#include <stdio.h>

/* Multiply the two negative using addition */
int multiply(a, b)
{
  /* Handle negatives */
  if(a < 0)
  {
    return -multiply(-a, b);   
  }

  /* Handle a == 0*/ 
  if (a == 0)
  {
    return 0;
  }

  /* Otherwise, add and recurse */
  return b+multiply(a-1, b);
}

int main()
{
  printf("%i\n", multiply(6, 3));
  printf("%i\n", multiply(9, 9));
  printf("%i\n", multiply(3, 0));
  printf("%i\n", multiply(-1, 7));
  printf("%i\n", multiply(-29, 803));

  return 0;
}
