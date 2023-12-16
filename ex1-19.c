#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char line[], int len);

int main(void) {
  char line[MAXLINE];
  int len;

  while((len = get_line(line, MAXLINE)) > 0) {
    reverse(line, len);
  }

}

int get_line(char line[], int lim) {
  int c,i;

  for (i = 0; i < lim -1 && ((c = getchar()) != EOF) && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

void reverse(char line[], int len) {
  int i, j;
  char temp;
  for (i = 0, j = len - 1; i <= j ; ++i, --j) {
    temp = line[i];
    line[i] = line[j];
    line[j] = temp;
  }
  printf("reverse string is %s\n", line);
}
