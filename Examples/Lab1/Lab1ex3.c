#include <stdio.h>

int main()
{
  unsigned int cm = 101;

  /*Perform and exact conversion by multiplying by 100, and round *down* */
  const unsigned int cmFor100Inches = 254;
  unsigned int inches = (cm*100)/cmFor100Inches;

  const unsigned int inchesInFeet = 12;
  unsigned int feet = inches/inchesInFeet;

  /*Calculate the remainder */
  inches = inches-feet*inchesInFeet;

  printf("%i cm is %i feet %i inches to the nearest inch.\n", cm, feet, inches);

  cm = 3;
  inches = (cm*100)/cmFor100Inches;
  feet = inches/inchesInFeet;
  inches = inches-feet*inchesInFeet;
  printf("%i cm is %i feet %i inches to the nearest inch.\n", cm, feet, inches);

  cm = 15;
  inches = (cm*100)/cmFor100Inches;
  feet = inches/inchesInFeet;
  inches = inches-feet*inchesInFeet;
  printf("%i cm is %i feet %i inches to the nearest inch.\n", cm, feet, inches);

  cm = 92;
  inches = (cm*100)/cmFor100Inches;
  feet = inches/inchesInFeet;
  inches = inches-feet*inchesInFeet;
  printf("%i cm is %i feet %i inches to the nearest inch.\n", cm, feet, inches);

  cm = 24;
  inches = (cm*100)/cmFor100Inches;
  feet = inches/inchesInFeet;
  inches = inches-feet*inchesInFeet;
  printf("%i cm is %i feet %i inches to the nearest inch.\n", cm, feet, inches);

  return 0;
}
