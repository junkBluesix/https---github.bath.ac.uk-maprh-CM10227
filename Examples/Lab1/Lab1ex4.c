#include <stdio.h>

int main()
{
  unsigned int previous = 0;
  unsigned int current = 1;
  unsigned int next;

  printf("%u\n", previous);
  
  printf("%u\n", current);

  /*Calculate the next term and update*/
  next = previous+current;
  previous = current;
  current = next;
  
  /* Keep on doing this, without loops */
  /* 3 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 4 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 5 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 6 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 7 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 8 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 9 */
  printf("%u\n", current);
  next = previous+current;
  previous = current;
  current = next;

  /* 10 */
  printf("%u\n", current); 

  return 0;
}
