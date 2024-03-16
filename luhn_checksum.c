#include <stdio.h>

// which digits to double
// treating doubled numbers 10 and greater according to their individual digits
// knowing we've reached the end of the number
// reading each digit separately

int double_digit_value(int digit);

int double_digit_value(int digit) {
  int doubled_digit = digit * 2;
  int sum = 0;
  if (doubled_digit > 10) {
    sum = 1 + (doubled_digit % 10);
  } else
    sum = doubled_digit;
  return sum;
}

void main() {
  int c;
  int position = 1;
  int evenCheckSum = 0;
  int oddCheckSum = 0;
  int checkSum;
  
  while((c = getchar()) != 10) {
    if (position % 2 == 0) {
      evenCheckSum += double_digit_value(c - '0');
      oddCheckSum += c - '0';
    } else {
      evenCheckSum += c - '0';
      oddCheckSum += double_digit_value(c - '0');
    }
    ++position;
  }

  if ((position - 1) % 2 == 0) {
    checkSum = oddCheckSum;
  } else {
    checkSum = evenCheckSum;
  }

  if (checkSum % 10 == 0) {
    printf("Checksum is valid %d\n", checkSum);
  } else {
    printf("Check is invalid %d\n", checkSum);
  }
}

