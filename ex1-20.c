#include <stdio.h>
#define MAXLINE 1000

int main(void) {
  int c, i = 0;
  char user_input[MAXLINE];

  while((c = getchar()) != EOF && i < MAXLINE - 1) {
    if (c == '\t') {
      for (int j = 0; j < 4; ++j) {
        user_input[i + j] = ' ';
      }
      i += 4;
    } else {
      user_input[i] = c;
      ++i;
    }
  }

  printf("user input is %s\n", user_input);
}
