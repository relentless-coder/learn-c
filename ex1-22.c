#include <stdio.h>
#define BREAKPOINT 10
#define TRUE 1
#define FALSE 0

int is_non_blank(char c);

int main(void) {
  int c, l, i = 0;

  while ((c = getchar()) != EOF) {
    if(c == '\n') {
      i = 0;
      putchar(c);
    } else if (i < BREAKPOINT) {
      putchar(c);
      l = c;
      ++i;
    } else {
      i = 0;
      if (is_non_blank(l) && is_non_blank(c)) putchar('-');
      putchar('\n');
      if (is_non_blank(c)) {
        if (is_non_blank(l)) putchar('-');
        putchar(c);
      }
    }
  }
}

int is_non_blank(char c) {
  if (c == ' ' || c == '\t') return FALSE;
  return TRUE;
}
