#include <stdio.h>

// Function Prototype
int add(int, int);
void greet();
double multiply(double, double);
void printNumber(int);

int main()
{
  // Calling a function
  greet();

  // Calling a function with parameters and using its return value
  int sum = add(5, 7);
  printf("Sum of 5 and 7 is %d\n", sum);

  // Calling a function with different parameter types and a return value
  double result = multiply(2.5, 3.5);
  printf("Multiplication of 2.5 and 3.5 is %.2f\n", result);

  // Calling a function with a variable
  int number = 10;
  printNumber(number);

  return 0;
}

// Function Definition
int add(int num1, int num2)
{
  return num1 + num2;
}

void greet()
{
  printf("Hello, welcome to the program!\n");
}

double multiply(double a, double b)
{
  return a * b;
}

void printNumber(int num)
{
  printf("The number is %d\n", num);
}
