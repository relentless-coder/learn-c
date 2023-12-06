#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF)
    putchar(c);

  printf("EOF is %d\n", c);
  return 0;
}
