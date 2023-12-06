#include <stdio.h>

int main() {
  int c;
  char last = '\0';

  while((c = getchar()) != EOF) {
    if (c != ' ') {
      if (last == ' ') {
        putchar(' ');
        last = '\0';
      }
      putchar(c);
    } else {
      last = ' ';
    }
  }
  return 0;
}
