// Include necessary libraries
#include <stdio.h>
#include <string.h>

void example_strlen() {
  char stringWithSize[10] = "Hello";
  printf("The size of the stringWithSize is %lu.\n", sizeof(stringWithSize));    // %lu for unsigned long as sizeof returns unsigned long
  printf("The length of the stringWithSize is %lu.\n", strlen(stringWithSize));          // %lu for unsigned long as strlen returns unsigned long

  char stringWithoutSize[] = "Hello";
  printf("\nThe size of the stringWithoutSize is %lu.\n", sizeof(stringWithoutSize));    // %lu for unsigned long as sizeof returns unsigned long
  printf("The length of the stringWithoutSize is %lu.\n", strlen(stringWithoutSize));          // %lu for unsigned long as strlen returns unsigned long
}

void example_strcpy() {
  char source[100];
  char destination[100];

  printf("strcpy\n");
  strcpy(source, "Today's 20 October");
  strcpy(destination, source);
  printf("Source: %s\n", source);
  printf("Destination: %s\n", destination);
}

void example_strncpy() {
  char source[100] = "Today's 20 October";
  char destination[100];

  // Copy string from the beginning
  printf("strncpy\n");
  strncpy(destination, source, 5);  // strncpy does not add the null char
  destination[5] = '\0';            // we need to add it by ourselves
  printf("Source: %s\n", source);
  printf("Destination: %s\n", destination);

  // Copy string from specific character
  printf("\nstrncpy from specific character\n");
  strncpy(destination, &source[11], 7);   // &source[11] is the address of source[11]
  destination[7] = '\0';                  // we need to add it by ourselves
  printf("Source: %s\n", source);
  printf("Destination: %s\n", destination);
}

int main() {
  example_strlen();
  example_strcpy();
  example_strncpy();

  return 0;
}
