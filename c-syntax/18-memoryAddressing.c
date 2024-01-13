#include <stdio.h>

int main()
{
  int intVar = 5;
  float floatVar = 10.0;
  char charVar = 'A';

  // Printing the addresses of the variables
  printf("Address of intVar: %p\n", (void *)&intVar);
  printf("Address of floatVar: %p\n", (void *)&floatVar);
  printf("Address of charVar: %p\n", (void *)&charVar);

  // Printing the size of the variables
  printf("Size of intVar: %zu bytes\n", sizeof(intVar));
  printf("Size of floatVar: %zu bytes\n", sizeof(floatVar));
  printf("Size of charVar: %zu bytes\n", sizeof(charVar));

  // Array and its memory addresses
  int array[3] = {1, 2, 3};
  printf("\nArray addresses:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Address of array[%d]: %p\n", i, (void *)&array[i]);
  }

  // Address arithmetic (note: not using pointers)
  printf("\nAddress arithmetic (using array addresses):\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Address of array[%d]: %p, Next address: %p\n",
           i, (void *)&array[i], (void *)(&array[i] + 1));
  }

  return 0;
}
