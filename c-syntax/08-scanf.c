#include <stdio.h>

int main()
{
  int intVar;
  float floatVar;
  double doubleVar;
  char charVar;
  char strVar[100]; // String variable with max length of 99 characters (+1 for null terminator)

  printf("Enter an integer: ");
  scanf("%d", &intVar);

  printf("Enter a float: ");
  scanf("%f", &floatVar);

  printf("Enter a double: ");
  scanf("%lf", &doubleVar);

  // Consuming the leftover newline character
  getchar();

  printf("Enter a character: ");
  scanf("%c", &charVar);

  // Consuming the leftover newline character
  getchar();

  printf("Enter a string: ");
  fgets(strVar, sizeof(strVar), stdin); // Using fgets to read a string with spaces

  // Printing the values
  printf("\nYou entered the integer: %d\n", intVar);
  printf("You entered the float: %f\n", floatVar);
  printf("You entered the double: %lf\n", doubleVar);
  printf("You entered the character: %c\n", charVar);
  printf("You entered the string: %s", strVar); // Newline is included in the string

  return 0;
}
