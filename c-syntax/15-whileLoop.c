#include <stdio.h>
#include <string.h>

int main()
{
  // Use case 1: Loop until a condition is met
  int counter = 0;
  printf("Counting to 5: ");
  while (counter < 5)
  {
    printf("%d ", counter);
    counter++;
  }
  printf("\n");

  // Use case 2: Looping through a string
  char str[] = "Hello";
  int index = 0;
  printf("Characters in '%s': ", str);
  while (str[index] != '\0')
  {
    printf("%c ", str[index]);
    index++;
  }
  printf("\n");

  // Use case 3: Using strcpy in a loop
  char src[] = "Copy this!";
  char dest[50];
  int i = 0;
  printf("Copying string using while loop: '");
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0'; // Null-terminate the destination string
  printf("%s'\n", dest);

  // Alternative to use case 3: Using strcpy directly
  char directCopy[50];
  strcpy(directCopy, src);
  printf("Directly copied string: '%s'\n", directCopy);

  return 0;
}
