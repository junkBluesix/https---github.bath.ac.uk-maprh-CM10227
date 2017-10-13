#include <stdbool.h>
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

/* Is keyword located at stringPosition? */
bool matchAtPosition(const char* keyword, const char* stringPosition)
{
  while(*keyword != '\0')
  {
    /* Make sure we don't run out of the string */
    if(*stringPosition == '\0')
    {
      return false;
    }

    if(*keyword != *stringPosition)
    {
      return false;
    }

    keyword++;
    stringPosition++;
  }

  /*Identical match*/
  return true;
}

/* Counts how may times keyword occurs in longString */
int keywordCount(const char* keyword, const char* longString)
{
  int count = 0;

  /*Try every position in longString */
  for(; *longString != '\0'; longString++)
  {
    if(matchAtPosition(keyword, longString))
    {
      count++;
    }
  }

  return count;
}

int main()
{
  char * longString = receiveString(256);
  char * keyword = receiveString(8);

  printf("%i\n", keywordCount(keyword, longString));
  
  /* Clear up the memory (every malloc needs a free) */
  free(longString);
  free(keyword);
  return 0;
}
