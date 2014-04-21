#include <stdio.h>
#include <limits.h>

int straight_add (int x, int y) 
{
  int result;
  result = x + y;
  return result;
}

int recursive_add (int x, int y) 
{
  int result;
  if (y == 0) 
    {
      result = x;
    }
  else if (x >= (INT_MAX - 1))
    {
      puts ("Whatcha tryin' to do, mister?? Them numbas too big!");
      result = 0;
    }
  else
    {
      result = recursive_add (x, y - 1) + 1;
    }
  return result;
} 

int add (int x, int y)
{
  return recursive_add (x,y);
}
  
int main ()
{
  char buff [33];
  int i;
  i = add (2147483644,4);
  printf ("%d\n", i);
}
