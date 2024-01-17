#include <stdio.h>

int main()
{
  int integerVariable = 42;
  float floatVariable = 3.141592;
  char characterVariable = 'A';
  char stringVariable[] = "Hello, World!";

  // Using printf to print variables
  printf("1. Integer: %d\n", integerVariable);
  printf("2. Float: %.2f\n", floatVariable);
  printf("3. Character: %c\n", characterVariable);
  printf("4. String: %s\n", stringVariable);

  // Using escape sequences
  printf("5. Newline: \n");
  printf("6. Tab: \tTabbed Text\n");
  printf("7. Double percent sign: %%\n");

  // Using width and alignment
  printf("8. Right-aligned integer: %5d\n", integerVariable);
  printf("9. Left-aligned integer: %-5d\n", integerVariable);

  // Using precision for floating-point numbers
  printf("10. Float with precision: %.3f\n", floatVariable);

  // Using positional arguments (C99 feature)
  printf("11. Positional arguments: %2$d, %1$f\n", floatVariable, integerVariable);

  return 0;
}
