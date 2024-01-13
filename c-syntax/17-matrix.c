#include <stdio.h>

int main()
{
  // Declaring and initializing a 2D array
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  // Accessing elements in a 2D array
  printf("Element at [0][0]: %d\n", matrix[0][0]);
  printf("Element at [1][1]: %d\n", matrix[1][1]);
  printf("Element at [2][2]: %d\n", matrix[2][2]);

  // Modifying elements in a 2D array
  matrix[0][0] = 10;
  matrix[1][1] = 11;
  matrix[2][2] = 12;

  // Iterating over a 2D array using nested loops
  printf("Matrix elements:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Working with a 3D array
  int threeDArray[2][3][2] = {
      {{1, 2}, {3, 4}, {5, 6}},
      {{7, 8}, {9, 10}, {11, 12}}};

  // Accessing and modifying elements in a 3D array
  printf("Element at [1][2][1]: %d\n", threeDArray[1][2][1]);
  threeDArray[1][2][1] = 13;

  // Iterating over a 3D array
  printf("3D Array elements:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        printf("%d ", threeDArray[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
