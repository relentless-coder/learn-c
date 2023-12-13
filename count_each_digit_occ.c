#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;

  for (i= 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c-'0'];
    }
  }
  for (int j = 0; j < 10; ++j)
      printf("%d occurs %d times\n", j - 0, ndigit[j - 0]);

  return 0;
}
