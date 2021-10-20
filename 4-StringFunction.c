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

void compareTwoStrings(){
  char strA[] = "Hello";
  char strB[6] = "Hello";

  if (strA == strB) {
    printf("strA has the same address with strB\n");
  } else {
    printf("strA has the different address with strB\n");
  }

  if (strcmp(strA, strB) == 0) {
    printf("strA has the same content with strB\n");
  } else {
    printf("strA has the different content with strB\n");
  }
}

void sortStrings() {
  char str[5][50], temp[50];

  // Get the number of str using sizeof
  int totalSize = sizeof(str);                // 5 * 50 = 250
  int oneStrSize = sizeof(str[0]);            // 50
  int numberOfStr = totalSize/oneStrSize;     // 250 / 50 = 5

  printf("Enter %d words: ", numberOfStr);

  // Getting strings input
  for (int i = 0; i < numberOfStr; ++i) {
    scanf("%s", str[i]);  //str[0]=Cat, str[1]=Boy, str[2]=Amy, str[3]=Zoe, str[4]=Danny
  }

  // storing strings in the lexicographical order
  for (int i = 0; i < numberOfStr; ++i) {
    for (int j = i + 1; j < numberOfStr; ++j) {
      // swapping strings if they are not in the lexicographical order
      if (strcmp(str[i], str[j]) > 0) {
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }

  printf("\nOrder the string in lexicographical order: \n");
  for (int i = 0; i < numberOfStr; ++i) {
    printf("%s\n", str[i]);
  }
}

int main() {
  // example_strlen();
  // example_strcpy();
  // example_strncpy();
  // example_strcmp();
  // compareTwoString();
  sortString();
  return 0;
}
