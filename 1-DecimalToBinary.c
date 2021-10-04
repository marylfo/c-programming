// Include necessary libraries
#include <stdio.h>
#include <math.h>

char* decimalToBinary(int num, char* buffer) {
  int currentDigit = 0;
  // Handle zero
  if (num == 0) {
    buffer[currentDigit++] = '0';
    buffer[currentDigit] = '\0';
    return buffer;
  }
  // Handle negative value
  if (num < 0) {
    return NULL;
  }

  int numOfDigits = (int) floor(log(num) / log(2)) + 1;
  while (currentDigit < numOfDigits) {
    int baseVal = (int) pow(2, numOfDigits-currentDigit-1);
    int numVal = (int) floor(num / baseVal);
    // Convert the numVal from int to char
    char value = numVal + '0';
    buffer[currentDigit] = value;
    currentDigit++;
    num -= baseVal * numVal;
  }
  buffer[currentDigit] = '\0';
  return buffer;
}

int main() {
  int decimal;
  printf("Please enter a decimal number: ");
  scanf("%i", &decimal);

  char binary[20];
  printf("The corresponding binary number is %s.\n", decimalToBinary(decimal, binary));

  return 0;
}
