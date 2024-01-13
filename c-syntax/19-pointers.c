#include <stdio.h>

int main()
{
  int intVar = 10;
  float floatVar = 20.5;
  char charVar = 'A';

  // Pointers declaration and initialization
  int *intPtr = &intVar;
  float *floatPtr = &floatVar;
  char *charPtr = &charVar;

  // Printing the addresses stored in the pointers
  printf("Address in intPtr: %p\n", (void *)intPtr);
  printf("Address in floatPtr: %p\n", (void *)floatPtr);
  printf("Address in charPtr: %p\n", (void *)charPtr);

  // Dereferencing pointers to get the value at the address
  printf("Value at intPtr: %d\n", *intPtr);
  printf("Value at floatPtr: %f\n", *floatPtr);
  printf("Value at charPtr: %c\n", *charPtr);

  // Pointer arithmetic
  printf("\nPointer Arithmetic:\n");
  printf("Address in intPtr before increment: %p\n", (void *)intPtr);
  intPtr++; // Incrementing the pointer
  printf("Address in intPtr after increment: %p\n", (void *)intPtr);

  // Arrays and pointers
  int intArray[3] = {100, 200, 300};
  int *arrayPtr = intArray; // Array name is a pointer to the first element

  printf("\nArray and Pointers:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("intArray[%d] = %d, *(arrayPtr + %d) = %d\n", i, intArray[i], i, *(arrayPtr + i));
  }

  return 0;
}
