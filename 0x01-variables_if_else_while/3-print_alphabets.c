#include <stdio.h>
#include <unistd.h>

int main(void)
{
  char c;

  for (c = 97; c <= 122; c++) {
    putchar(c);
  }
  for (c = 'A'; c <= 'Z'; c++) {
    putchar(c);
  }
  putchar('\n');
  return 0;
}
