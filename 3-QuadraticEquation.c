// Include necessary libraries
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double getDelta(int a, int b, int c) {
  return (b * b - 4 * a * c);
}

int main() {
  double a, b, c;
  printf("This is a program to solve quadratic equation in the form of 'ax^2 + bx + c = 0'\n");
  printf("Please enter a: ");
  scanf("%lf", &a);
  printf("Please enter b: ");
  scanf("%lf", &b);
  printf("Please enter c: ");
  scanf("%lf", &c);

  bool isAZero = (a == 0);
  bool isBZero = (b == 0);

  if (isAZero && isBZero) {
    printf("It is not an equation\n");
    return 0;
  } else if (isAZero && !isBZero) {
    double x = - c / b;
    printf("x = %lf\n", x);
  } else if (!isAZero && getDelta(a, b, c) < 0) {
    printf("There is no solution\n");
    return 0;
  } else if (!isAZero && getDelta(a, b, c) == 0) {
    double x = - b / (2 * a);
    printf("x = %lf\n", x);
  } else if (!isAZero && getDelta(a, b, c) > 0) {
    double x1 = (- b + pow(getDelta(a, b, c), 0.5)) / (2 * a);
    double x2 = (- b - pow(getDelta(a, b, c), 0.5)) / (2 * a);
    printf("x = %lf or %lf\n", x1, x2);
  }

  return 0;
}
