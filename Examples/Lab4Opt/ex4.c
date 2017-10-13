#include <stdbool.h>
#include <stdio.h>

bool isEven(int n)
{
  return (n%2 == 0);
}

/* Returns true if n is prime, false otherwise */
bool isPrime(int n)
{
  /* Negative numbers, zero and one are not prime */
  if(n < 2)
  {
    return false;
  }
  
  /*Even numbers are not prime, except for 2 */
  if(n == 2)
  {
    return true;    
  }
  
  if(isEven(n))
  {
    return false;
  }

  /* Try all odd numbers for divisors */
  int divisor;
  for(divisor = 3; divisor*divisor <= n; divisor += 2)
  {
    if(n%divisor == 0)
    {
      return false;
    }
  }

  /* Nothing divides n, so it is prime */
  return true;
}

bool numberSatisfies(int n)
{
  if(isEven(n))
  {
    return false;    
  }

  if(isPrime(n))
  {
    return false;    
  }

  int testSquare;
  for(testSquare = 1; testSquare*testSquare < n; testSquare++)
  {
    int twiceSquare = 2*testSquare*testSquare;
    int diff = n-twiceSquare;

    if(diff <= 0)
    {
      break;
    }

    if(isPrime(diff))
    {
      return false;      
    }
  }

  return true;
}

int main()
{
  int n = 2;
  while(!numberSatisfies(n))
  {
    n++;
  }

  printf("%d\n", n);

  return 0;
}
