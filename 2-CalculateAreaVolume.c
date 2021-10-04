/* Include necessary libraries */
#include <stdio.h>

/* Initialise const value with name in capital letter*/
#define PI 3.14159265

double getCircleArea(double radius) {
  return PI * radius * radius;
}

double getConeVolume(double radius, double height) {
  return getCircleArea(radius) * height / 3;
}

double getSphereSurfaceArea(double radius) {
  return 4 * getCircleArea(radius);
}

double getSphereVolume(double radius) {
  return 4 * PI * radius * radius * radius / 3;
}

int main() {
  /* Ask for user's input */
  double radius, height;
  printf("Enter radius value: ");
  scanf("%lf", &radius);
  printf("Enter height value: ");
  scanf("%lf", &height);

  /* Validate user's input */
  while (radius <= 0) {
    printf("Invalid radius value, please input a non negative value: ");
    scanf("%lf", &radius);
  }
  while (height <= 0) {
    printf("Invalid height value, please input a non negative value: ");
    scanf("%lf", &height);
  }

  /* Output calculated values */
  printf("Area of circle with radius %.2f cm is %.2f cm^2.\n", radius, getCircleArea(radius));
  printf("Volume of cone with radius %.2f cm and height %.2f cm is %.2f cm^3.\n", radius, height, getConeVolume(radius, height));
  printf("Surface area of sphere with radius %.2f cm is %.2f cm^2.\n", radius, getSphereSurfaceArea(radius));
  printf("Volume of sphere with radius %.2f cm is %.2f cm^3.\n", radius, getSphereVolume(radius));

  return 0;
}
