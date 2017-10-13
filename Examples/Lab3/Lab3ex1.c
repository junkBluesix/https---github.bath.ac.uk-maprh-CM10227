#include <stdio.h>

/* Calculate the factorial using a for loop */
unsigned int factorialFor(unsigned int n)
{
  if(n == 0)
  {
    return 1;
  }

  unsigned int result = 1;
  
  unsigned int multiplier;
  for(multiplier = 2; multiplier <= n; multiplier++)
  {
    result *= multiplier;
  }
  
  return result;
}

/* Calculate the factorial using a for loop */
unsigned int factorialWhile(unsigned int n)
{
  if(n == 0)
  {
    return 1;
  }

  unsigned int result = 1;
  
  unsigned int multiplier = 2;
  while(multiplier <= n)
  {
    result *= multiplier;
    multiplier++;
  }
  
  return result;
}

int main()
{
  printf("%u\n", factorialFor(1));
  printf("%u\n", factorialFor(1));

  
  return 0;
}
