#include <stdbool.h>
#include <stdio.h>

unsigned int sumSquareDigits(unsigned int N)
{
  unsigned int sum = 0;
  
  while(N > 0)
  {
    sum += (N%10)*(N%10);
    N /= 10;
  }

  return sum;
}

bool possibleNumber(unsigned int N)
{
  if (N < 100 || N > 999)
  {
    return false;    
  }

  if(N%11 != 0)
  {
    return false;    
  }

  return (N/11 == sumSquareDigits(N));
}

int main()
{
  unsigned int N;
  for (N = 100; N <=999; N++)
  {
    if(possibleNumber(N))
    {
      printf("%u\n", N);
    }
  }

  return 0;
}
