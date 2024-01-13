#include <stdio.h>

int globalVar = 10; // Global variable

void demoFunction()
{
  static int staticVar = 0; // Static variable
  staticVar++;

  int localVar = 5; // Local variable

  printf("Local Variable: %d, Static Variable: %d\n", localVar, staticVar);
}

int main()
{
  extern int externalVar;  // External variable declaration
  const int constVar = 25; // Constant variable

  printf("Global Variable (Initial): %d\n", globalVar);
  globalVar = 20; // Modifying global variable
  printf("Global Variable (Modified): %d\n", globalVar);

  demoFunction();
  demoFunction(); // Demonstrates static variable behavior

  printf("External Variable: %d\n", externalVar);
  printf("Constant Variable: %d\n", constVar);

  return 0;
}

// External variable definition
int externalVar = 30;
