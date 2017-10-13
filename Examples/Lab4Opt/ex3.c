#include <stdbool.h>
#include <stdio.h>

bool insideCircle(double x, double y)
{
  return ((x*x+y*y) < 1.0);
}

int main()
{
  const unsigned int numSamples = 100000;
  const double interval = 2.0/numSamples;

  unsigned long inside = 0;
  unsigned long outside = 0;
  
  double x = -1.0;
  int xNum;
  for (xNum = 0; xNum <= numSamples; xNum++)
  {
    double y = -1.0;
    
    int yNum;
    for (yNum = 0; yNum <= numSamples; yNum++)
    {
      if(insideCircle(x, y))
      {
	inside++;
      }
      else
      {
	outside++;
      }
      
      y+= interval;
    }  
  x += interval;
  }

  printf("%f\n", (double)inside/(inside+outside)*4.0);
}
