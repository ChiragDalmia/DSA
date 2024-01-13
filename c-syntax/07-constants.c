#include <stdio.h>

// Defining constants using #define
#define PI 3.14159
#define MAX_SIZE 100

// Enumeration constants
enum
{
  OFF,
  ON
};

int main()
{
  // Constant variable using const keyword
  const int minSize = 10;

  // Using defined constants
  printf("Defined constant PI: %f\n", PI);
  printf("Defined constant MAX_SIZE: %d\n", MAX_SIZE);

  // Using const variable
  printf("Constant variable minSize: %d\n", minSize);

  // Using enumeration constants
  printf("Enumeration constant OFF: %d\n", OFF);
  printf("Enumeration constant ON: %d\n", ON);

  // Trying to modify a const variable (will cause a compile-time error)
  // minSize = 20; // Uncommenting this line will cause an error

  return 0;
}
