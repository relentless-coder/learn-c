#include <stdio.h>
#define IN 1
#define OUT 0


int main(void) {
  int c, state;
  state = OUT;
  int words_length[5];
  int curr_word_length = 0;
  int word_count = 0;
  int words_length_array_length = 0;
  int max_word_length = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        words_length[word_count - 1] = curr_word_length; 
        if (curr_word_length > max_word_length) max_word_length = curr_word_length;
        curr_word_length = 0;
        state = OUT;
      }
    } else {
      if (state == OUT) {
        state = IN;
        ++word_count;
      }
      ++curr_word_length;
    }
  }

  for (int i = max_word_length; i >= 0; --i) {
    for (int j = 0; j < 5; ++j) {
      if (i != 0) {
        if (words_length[j] >= i) {
          printf("#\t");
        } else {
          printf("\t");
        }
      } else {
        printf("=======");
      }
    }
    printf("\n");
  }
  for (int i = 0; i < 5; ++i) {
    printf("%d\t", i+1);
  }
  return 0;
}
