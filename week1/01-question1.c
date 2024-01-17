// name : Chirag Dalmia

#include <stdio.h>
#include <string.h>

int main()
{
  int num = 0;
  char result[5] = "";

  printf("enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    strcpy(result, "even");
  }
  else
  {
    strcpy(result, "odd");
  }

  printf("%d is %s", num, result);

  return 0;
}
