#include <stdio.h>

enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};

enum modeType mode = UPPERCASE;
char output_character;

int main() {
  // read individual charcters and convert them to integers
  int c;
  do {
    c = getchar();
    int number = c - '0';
    while ((c = getchar()) && (c != 10) && (c != ',')) {
      number = (number * 10) + (c - '0');
    }
    
    switch(mode) {
      case UPPERCASE:
        number = number % 27;
        output_character = number + 'A' - 1;
        if (number == 0) {
          mode = LOWERCASE;
        }
        break;
      case LOWERCASE:
        number = number % 27;
        output_character = number + 'a' - 1;
        if (number == 0) {
          mode = PUNCTUATION;
        }
        break;
      case PUNCTUATION:
        number = number % 9;
        switch (number) {
          case 1:
            output_character = '!';
            break;
          case 2:
            output_character = '?';
            break;
          case 3:
            output_character = ',';
            break;
          case 4:
            output_character = '.';
            break;
          case 5:
            output_character = ' ';
            break;
          case 6:
            output_character = ';';
            break;
          case 7:
            output_character = '"';
            break;
          case 8:
            output_character = '\'';
            break;
        }
        if (number == 0) {
          mode = UPPERCASE;
        }
        break;
    }
    printf("%c", output_character);
  } while(c != 10);
}
