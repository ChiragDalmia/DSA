#include <stdio.h>

int main()
{
  int a = 10, b = 20, c = 30;

  // Basic if statement
  if (a < b)
  {
    printf("a is less than b\n");
  }

  // if-else statement
  if (b != 20)
  {
    printf("b is not 20\n");
  }
  else
  {
    printf("b is 20\n");
  }

  // Nested if-else statement
  if (a == 10)
  {
    if (b == 20)
    {
      printf("a is 10 and b is 20\n");
    }
    else
    {
      printf("a is 10 but b is not 20\n");
    }
  }

  // if-else ladder
  if (a > b && a > c)
  { // Using logical AND operator
    printf("a is the greatest\n");
  }
  else if (b > a && b > c)
  {
    printf("b is the greatest\n");
  }
  else if (c > a && c > b)
  {
    printf("c is the greatest\n");
  }
  else
  {
    printf("Some values are equal\n");
  }

  // Using logical OR operator
  if (a == 10 || b == 30)
  {
    printf("Either a is 10 or b is 30\n");
  }

  // Using >= and <= operators
  if (c >= 30 && a <= 10)
  {
    printf("c is greater than or equal to 30 and a is less than or equal to 10\n");
  }

  return 0;
}
