#include <stdio.h>

/* Accepts an int from stdin. Loops if the input is invalid.*/
int receiveInt()
{ 
  /* Repeat until we get an int in isolation, i.e. and int followed by \n */
  while(1)
  {
    /* Take an int */
    int x;
    int result = scanf("%i", &x);

    /* Return if we got an int followed by a line break */
    if(result == 1 && getchar() == '\n')
    {
      return x;      
    }
  
    /*Otherwise, flush out the input so the user can have another go */
    /*NB without this, entering 123a456 works */
    char nextChar;
    while(nextChar != '\n') 
    {
      nextChar = getchar();
    }
  }
}

/* Prints the character c, n times */
void printNChars(const char c, unsigned int n)
{
  while(n > 0)
  {
    putchar(c);
    n--;
  }
}

/* Draws a tree such that widest point of "leaves" has specified width and trunk has specified hight  */
void drawTree(const unsigned int width, const unsigned int height)
{
  /* Start with the top of the tree*/
  unsigned int lines = (width+1)/2;
  int line;
  for(line = 0; line < lines; line++)
  {
    printNChars(' ', lines-line-1);
    printNChars('*', 2*line+1);
    printf("\n");
  }

  /* Now the rest of the tree */
  unsigned int spaces = (width-3)/2;
  for (line = 0; line < height; line++)
  {
    printNChars(' ', spaces);
    printNChars('*',3);
    printf("\n");
  }
}

int main()
{
  int width = receiveInt();
  if(width < 3)
  {
    printf("Width cannot be less than 3.\n");
    return 1;
  }

  int height = receiveInt();
  if (height < 1)
  {
    printf("Height cannot be less than 1.\n");
  }

  drawTree(width, height);
 
  return 0;
}
