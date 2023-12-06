#include <stdio.h>

int main() {
  float celsius;
  int lower, upper, step, fahr;
  
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("Fahrenheit\tCelsius\n");
  printf("-------------------\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3d %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
