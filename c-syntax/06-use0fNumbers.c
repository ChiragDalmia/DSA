#include <stdio.h>
#include <math.h>

int main()
{
  // Declaring and initializing numbers
  int intNum1 = 15, intNum2 = 4;
  double floatNum1 = 5.5, floatNum2 = 2.3;

  // Basic Arithmetic Operations
  printf("Addition: %d + %d = %d\n", intNum1, intNum2, intNum1 + intNum2);
  printf("Subtraction: %d - %d = %d\n", intNum1, intNum2, intNum1 - intNum2);
  printf("Multiplication: %d * %d = %d\n", intNum1, intNum2, intNum1 * intNum2);
  printf("Integer Division: %d / %d = %d\n", intNum1, intNum2, intNum1 / intNum2);
  printf("Modulus (remainder): %d %% %d = %d\n", intNum1, intNum2, intNum1 % intNum2);

  // Operations with floating point
  printf("Floating Point Division: %.2f / %.2f = %.2f\n", floatNum1, floatNum2, floatNum1 / floatNum2);

  // Using math.h functions
  printf("Power: %.2f^%.2f = %.2f\n", floatNum1, floatNum2, pow(floatNum1, floatNum2));
  printf("Square root: sqrt(%.2f) = %.2f\n", floatNum1, sqrt(floatNum1));
  printf("Ceiling: ceil(%.2f) = %.2f\n", floatNum2, ceil(floatNum2));
  printf("Floor: floor(%.2f) = %.2f\n", floatNum2, floor(floatNum2));
  printf("Absolute value (int): abs(%d) = %d\n", -intNum1, abs(-intNum1));
  printf("Absolute value (double): fabs(%.2f) = %.2f\n", -floatNum1, fabs(-floatNum1));
  printf("Sine: sin(%.2f) = %.2f\n", floatNum1, sin(floatNum1));
  printf("Cosine: cos(%.2f) = %.2f\n", floatNum1, cos(floatNum1));

  return 0;
}
