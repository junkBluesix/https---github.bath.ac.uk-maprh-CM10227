#include <stdbool.h>
#include <stdio.h>

/* Returns true if n is even, false otherwise */
bool isEven(int n)
{
  return (n%2 == 0);
}

/* Prints out a bool as either "True" or "False" */
void printBool(bool b)
{
  if(b)
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
}

int main()
{
  printBool(isEven(10));

  printBool(isEven(21));

  printBool(isEven(33));
  
  printBool(isEven(8));

  printBool(isEven(200));

  return 0;
}
