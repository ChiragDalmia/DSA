#include <stdio.h>

int main()
{
  int integerNumber = 42;
  float floatingNumber = 3.14159;
  char character = 'A';
  char string[] = "Hello, World!";

  printf("Integer: %d\n", integerNumber); // %d for integers

  printf("Float: %f\n", floatingNumber); // %f for floating-point numbers

  printf("Character: %c\n", character); // %c for characters

  printf("String: %s\n", string); // %s for strings

  printf("Formatted Integer: %04d\n", integerNumber); // %04d pads with zeros

  printf("Formatted Float: %.2f\n", floatingNumber); // %.2f limits decimal places

  printf("Character as Integer: %d\n", character); // %d can also be used with characters

  return 0;
}
