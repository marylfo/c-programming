/* Include necessary libraries */
#include <stdio.h>

/* Initialise const value with name in capital letter*/
#define PI 3.14159265

double getCircleArea(double radius) {
  // TODO 2: Complete the getArea function
  return 0;
}

double getConeVolume(double radius, double height) {
  // TODO 3: Complete the getConeVolume function using getArea
  return 0;
}

// TODO 4: Write your own function to calculate sphere surface area

// TODO 5: Write your own function to calculate sphere volume

int main() {
  /* Ask for user's input */
  double radius, height;
  printf("Enter radius value: ");
  scanf("%lf", &radius);
  printf("Enter height value: ");
  scanf("%lf", &height);

  /* Validate user's input */
  // TODO 1: Validate the input values and ask for re-entering if they are not positive

  /* Output calculated values */
  printf("Area of circle with radius %.2f cm is %.2f cm^2.\n", radius, getCircleArea(radius));
  printf("Volume of cone with radius %.2f cm and height %.2f cm is %.2f cm^3.\n", radius, height, getConeVolume(radius, height));
  // TODO 6: Add printf() to show the calculated sphere surface area
  // TODO 7: Add printf() to show the calculated sphere volume

  return 0;
}
