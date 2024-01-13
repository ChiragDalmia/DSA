#include <stdio.h>

int main()
{
  char operator;
  double num1, num2, result;

  // Asking the user to choose an operation
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

  // Getting two numbers from the user
  printf("Enter two operands: ");
  scanf("%lf %lf", &num1, &num2);

  if (operator== '+')
  {
    result = num1 + num2;
    printf("%.1lf + %.1lf = %.1lf\n", num1, num2, result);
  }
  else if (operator== '-')
  {
    result = num1 - num2;
    printf("%.1lf - %.1lf = %.1lf\n", num1, num2, result);
  }
  else if (operator== '*')
  {
    result = num1 * num2;
    printf("%.1lf * %.1lf = %.1lf\n", num1, num2, result);
  }
  else if (operator== '/')
  {
    if (num2 != 0.0)
    {
      result = num1 / num2;
      printf("%.1lf / %.1lf = %.1lf\n", num1, num2, result);
    }
    else
    {
      printf("Division by zero error!\n");
    }
  }
  else
  {
    printf("Invalid operator!\n");
  }

  return 0;
}
