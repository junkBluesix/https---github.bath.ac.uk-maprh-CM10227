#include <stdbool.h>
#include <stdio.h>

bool possibleSolution(unsigned int medals, unsigned int days)
{
  unsigned int remainingMedals = medals;
  
  unsigned int day;
  for(day = 1; day <= days; day++)
  {
    if(remainingMedals < day)
    {
      return false;      
    }

    if(day != days)
    {
      remainingMedals -= day;

      if(remainingMedals%7 != 0)
      {
	return false;      
      }
    
      remainingMedals -= remainingMedals/7;
    }
  }

  return (remainingMedals == days);
}

int main()
{
  int days;
  for(days = 2; days < 200; days ++)
  {
    int medals;
    for(medals = 1; medals < 1000; medals++)
    {
      printf("Trying %d days and %d medals ", days, medals);

      if (possibleSolution(medals, days))
      {
	printf("good\n") ;
	return 0;
      }
      else
      {
        printf("bad\n");
      }
    }    
  }

  return 1;
}
