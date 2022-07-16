#include <stdio.h>
#include <unistd.h>

int main()
{
  int n;
  int n1;
  int n2;

  for (n = 0; n <= 9; n++)
    {
      for (n1 = n + 1; n1 <= 9; n1++)
	{
	  for (n2 = n1 + 1; n2 <= 9; n2++)
	    {
	      putchar(n + '0');
	      putchar(n1 + '0');
	      putchar(n2 + '0');
	      if (n != 7 || n1 != 8 || n2 != 9 )
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar('\n');
  return 0;
}
