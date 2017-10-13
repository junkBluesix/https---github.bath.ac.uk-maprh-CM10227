#include <stdio.h>
#include <math.h>

/* Calculate the volume of a cylinder with the given height and radius */
double volCylinder(double height,  double radius)
{
  double result = M_PI*pow(radius, 2.0)*height;
  return result;
}

/* Prints calculated volume of a cylinder with the given height and radius */
void printVolCylinder(double height,  double radius)
{
  printf("The cylinder with height %1.1fcm and radius %1.1fcm has a volume of %1.2fcm^3\n", height, radius,
	 volCylinder(height, radius));
}

int main()
{
  printVolCylinder(7.0, 4.0);
  printVolCylinder(20.0, 3.0);
  printVolCylinder(14.7, 5.2);

  return 0;
}
