#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
  int len, max = 0;
  char line[MAXLINE];
  char longest[MAXLINE];

  while((len = get_line(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("longest user input lenght is %d\n", max);
    printf("longest line is %s\n", longest);
  }
}

int get_line(char line[], int lim) {
  int c, i = 0;
  for (i = 0; i < lim -1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  
  while (c  != EOF && c != '\n') {
    ++i;
    c = getchar();
  }

  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
