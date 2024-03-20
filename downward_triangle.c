#include <stdio.h>

int main() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 8 - i; ++j) {
      if (j < i) {
        printf(" ");
      } else {
        printf("#");
      }
    }
    printf("\n");
  }
}
