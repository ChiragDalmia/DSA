#include <stdio.h>

int main()
{
  // Basic for loop: iterating over a range of numbers
  printf("Basic for loop from 1 to 5:\n");
  for (int i = 1; i <= 5; i++)
  {
    printf("%d ", i);
  }
  printf("\n\n");

  // Using a for loop with an array
  int arr[] = {10, 20, 30, 40, 50};
  printf("Iterating over an array:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n\n");

  // Nested for loops: useful for multi-dimensional arrays or complex iterations
  printf("Nested for loops (2x2 matrix):\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("(%d,%d) ", i, j);
    }
    printf("\n");
  }
  printf("\n");

  // Using 'break' to exit a loop
  printf("Using 'break' to exit a loop at i = 3:\n");
  for (int i = 1; i <= 5; i++)
  {
    if (i == 3)
    {
      break; // Exit the loop
    }
    printf("%d ", i);
  }
  printf("\n\n");

  // Using 'continue' to skip the current iteration
  printf("Using 'continue' to skip even numbers:\n");
  for (int i = 1; i <= 5; i++)
  {
    if (i % 2 == 0)
    {
      continue; // Skip the rest of the loop body
    }
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}
