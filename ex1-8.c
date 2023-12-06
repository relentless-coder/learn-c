#include <stdio.h>

int main() {
  int c;
  double blank, tab, newline;

  while((c = getchar()) != EOF) {
    if (c == '\t') ++tab;
    if (c == '\n') ++newline;
    if (c == ' ') ++blank;
  }
  printf("blanks are --- %.0f\n", blank);
  printf("tab are --- %.0f\n", tab);
  printf("newline are --- %.0f\n", newline);
  return 0;
}
