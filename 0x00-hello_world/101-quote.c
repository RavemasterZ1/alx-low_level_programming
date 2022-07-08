#include <stdio.h>
#include <unistd.h>

int main(void)
{
  write(1, "and that piece of art is useful", 31);
  write(1, "- Dora Korpar, 2015-10-19\n", 26);
  return (1);
}
