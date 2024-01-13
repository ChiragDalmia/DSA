#include <stdio.h>

int main()
{
  // Declaring and initializing an array
  int intArray[5] = {10, 20, 30, 40, 50};

  // Accessing array elements
  printf("First element: %d\n", intArray[0]);
  printf("Third element: %d\n", intArray[2]);

  // Modifying array elements
  intArray[1] = 25; // Changing the second element to 25

  // Iterating over the array using a loop
  printf("Array elements: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", intArray[i]);
  }
  printf("\n");

  // Multi-dimensional array
  int multiArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // Accessing and modifying elements in a multi-dimensional array
  printf("Element at [1][2]: %d\n", multiArray[1][2]);
  multiArray[1][2] = 9; // Changing the element at [1][2] to 9

  // Iterating over a multi-dimensional array
  printf("Multi-dimensional array elements:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", multiArray[i][j]);
    }
    printf("\n");
  }

  return 0;
}
