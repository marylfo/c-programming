// Include necessary libraries
#include <stdio.h>
#include <string.h>

// Helper function for returning Hello World
char* getHelloWorldString() {
  return "Hello World";
}

char* getHelloWorldStringWithName(char name[]) {
  char greating[] = "Hello ";
  return strcat(greating, name);
}

int main(void) {
  // Method 1: Print a string by hard-coding the string
  printf("Hello World\n");

  // Method 2: Print a string by using printf format string(%s)
  printf("%s\n","Hello World");

  // Method 3: Print a string by passing variable to the printf format string(%s)
  char helloWorldString[] = "Hello World";
  printf("%s\n",helloWorldString);

  // Method 4: Print a string by calling a function with the printf format string(%s)
  printf("%s\n", getHelloWorldString());

  // Furthermore: Receive an input and output customised value using function
  char name[30];
  printf("Enter your name: ");
  scanf("%s", name);
  printf("%s\n", getHelloWorldStringWithName(name));

  // End of main function
  return 0;
}
