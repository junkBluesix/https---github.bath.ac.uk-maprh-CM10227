#include <stdio.h>
#include <math.h>

/* Calculate the distance between (x1, y1) and (x2, y2) */
double calculateDistance(double x1, double y1, double x2, double y2)
{
  double xDiff = x2-x1;
  double yDiff = y2-y1;

  double distSqr = pow(xDiff, 2.0)+pow(yDiff, 2.0);
  double dist = sqrt(distSqr);

  return dist; 
}

int main()
{
  printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
  printf("%1.2f\n", calculateDistance(21, 3, 7, 9));
  printf("%1.2f\n", calculateDistance(-2, 5, 17, 1));
  printf("%1.2f\n", calculateDistance(-13, -5, 9, 2));
  printf("%1.2f\n", calculateDistance(-6, -4, -14, 19));

  return 0;
}
