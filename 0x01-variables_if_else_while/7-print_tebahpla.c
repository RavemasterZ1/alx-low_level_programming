#include <stdio.h>
#include <unistd.h>

int main(void)
{
  char c;

  for (c = 'z'; c >= 'a'; c--) {
    putchar(c);
  }
  putchar('\n');
  return 0;
}
