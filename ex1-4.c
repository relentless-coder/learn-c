#include <stdio.h>

#define LOWER -17.8
#define UPPER 148.9
#define STEP 11.1

int main() {
  float fahr, celsius;

  celsius = LOWER;

  printf("Celsius\tFahrenheit\n");
  printf("-------------------\n");

  while (celsius <= UPPER) {
    fahr = (celsius * 9.0/5.0) + 32.0;
    printf("%3.1f %6.0f\n", celsius, fahr);
    celsius = celsius + STEP;
  }
  return 0;
}
