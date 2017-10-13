#include <stdio.h>
#include <stdlib.h>

/* Receives a string of maximum length maxSize from the user.
   NB remember to call free on the string when finished with  */
char * receiveString(unsigned int maxSize)
{
  /* The resulting array needs an extra space for the null terminating charactor*/
  char* string = malloc((maxSize+1)*sizeof(char));

  /* Check there was enough memory, for good practice */
  if(!string)
  {
    printf("Out of memory\n");
    exit(1);
  }
  
  /* Repeat until we get a string */
  while(1)
  {
    /* Obtain the string from stdin */
    char * result = fgets(string, maxSize+1, stdin);

    if(result)
    {
      /*See if the string has a \n, and if so, remove and return */
      char* it;

      for(it = string;
	  *it != '\0'; /* Stop if null terminator is reached*/
	  it++)
      {
	if(*it == '\n')
	{
	  /* Replace with an additional null terminator and return */
	  *it = '\0';
	  return string;
	}
      }

      /* It's possible the string was exactly the right length, in which case, the next char is a line break */
      if(getchar() == '\n')
      {
	return string;
      }
    }
    else
    {
      /* The user pressed ctrl+D, so exit */
      exit(0);
    }

    /* The user typed in too much: give the user another go, after flushing buffer */
    char nextChar = 0;
    while(nextChar != '\n')
    {
      nextChar = getchar();
    }
    printf("Too long\n");
  }
}

/* Recives a null terminated string of hex characters, and returns the integer value */
int hexToInt(const char * hexString)
{
  int result = 0;

  while (*hexString != '\0')
  {
    /* Each additional digit causes the rest to be worth 16 times as much */
    result *= 16;

    /*The char, if valid, will wither lie in ASCII between 0 to 9, a to f or A to F.
      We work out the hypothetical value for each of the three cases.
      A is 10, so we add ten to the value.*/
    int zeroToNineValue = *hexString-'0';
    int AToFValue = *hexString-'A'+10;
    int aTofValue = *hexString-'a'+10;

    /* Now we work out if any of the three cases was actually correct: incorrect cases will have an invalid
     value e.g. 'A'-'0' = 17 but 'B'-'A'+10 = 11 */
    if(zeroToNineValue >= 0 && zeroToNineValue <= 9)
    {
      result += zeroToNineValue;
    }
    else if(AToFValue >= 10 && AToFValue <= 15)
    {
      result+= AToFValue;
    }
    else if(aTofValue >= 10 && aTofValue <= 15)
    {
      result+= aTofValue;
    }
    else
    {
      printf("Invalid hex number\n");
      exit(1);
    }

    hexString++;
  }

  return result;
}

int main()
{
  char * hexString = receiveString(5);
  printf("%i\n", hexToInt(hexString));
  return 0;
}
