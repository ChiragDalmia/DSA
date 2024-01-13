#include <stdio.h>

int main()
{
  int choice;

  printf("Enter a number (1-4): ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("You chose option 1.\n");
    break;
  case 2:
    printf("You chose option 2.\n");
    break;
  case 3:
  case 4:
    // Multiple cases leading to the same action
    printf("You chose option 3 or 4.\n");
    break;
  default:
    // Default case for any input not covered above
    printf("Invalid choice. Please choose a number between 1 and 4.\n");
  }

  // Demonstrating fall-through behavior
  printf("\nNow demonstrating fall-through behavior:\n");
  switch (choice)
  {
  case 1:
    printf("Starting at 1.\n");
    // No break statement causes fall-through
  case 2:
    printf("Passed through 2.\n");
    // No break statement causes fall-through
  case 3:
    printf("Passed through 3.\n");
    break; // Break statement ends the switch
  default:
    printf("This is the default case.\n");
  }

  return 0;
}
