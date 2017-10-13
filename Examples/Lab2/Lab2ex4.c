#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Returns true if n is even, false otherwise */
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

/* Print whether or not x is even, and whether or not it is prime */
void printDetails(unsigned int x)
{
  if(x > 9999)
  {
    printf("Error: invalid number");
    exit(1);
  }
  
  printf("%i is ", x);

  if(isEven(x))
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }

  printf(" and ");

  if(!isPrime(x))
  {
    printf("not ");
  }

  printf("prime.\n");

}

int main()
{
  printDetails(1);
  printDetails(2);
  printDetails(3);
  printDetails(4);
  printDetails(5);


  printDetails(11);
  printDetails(74);
  printDetails(307);
  printDetails(7402);
  printDetails(9357);
  
  return 0;
}
