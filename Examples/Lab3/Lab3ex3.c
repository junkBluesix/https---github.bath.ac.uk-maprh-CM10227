#include <stdio.h>

int main()
{
  //Take in an integer
  int x;
  int result = scanf("%i", &x);

  /* We should retrieve exactly one item, the integer */
  if(result != 1)
  {
    printf("Invalid input\n");

    /* A non-zero return indicates an error */
    return 1;
  }

  if(x < 0)
  {
    printf("Invalid input\n");
    return 1;
  }
  
  unsigned int multTable[x][x];

  unsigned int i;
  unsigned int j;
  for(i = 0; i < x; i++)
  {
    for(j = 0; j < x; j++)
    {
      multTable[i][j] = (i+1)*(j+1);
    }    
  }

  for(i = 0; i < x; i++)
  {
    for(j = 0; j < x; j++)
    {
      printf("%u", multTable[i][j]);

      if(j+1 != x)
      {
	printf(",");
      }
    }
    printf("\n");
  }
  
  return 0;
}
