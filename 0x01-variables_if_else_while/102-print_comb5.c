#include <stdio.h>
#include <unistd.h>

int main()
{
  int n;
  int n1;

  for (n = 0; n <= 9; n++)
    {
      for (n1 = 0; n1 <= 9; n1++)
	{
	  putchar(n + '0');
	  putchar(n1 + '0');
	  if (n != 9 || n1 != 9 )
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');
  return 0;
}
