#include <stdio.h>
#include <string.h>

// Defining a struct
struct Person
{
  char name[50];
  int age;
  float height;
};

int main()
{
  // Declaring and initializing a struct variable
  struct Person person1;
  strcpy(person1.name, "Alice"); // Using strcpy to assign a string
  person1.age = 30;
  person1.height = 5.5;

  // Accessing struct members
  printf("Person 1: Name = %s, Age = %d, Height = %.1f\n", person1.name, person1.age, person1.height);

  // Declaring and initializing a struct variable using designated initializers
  struct Person person2 = {.name = "Bob", .age = 25, .height = 6.0};

  // Modifying struct members
  person2.age = 26;
  strcpy(person2.name, "Robert"); // Changing name using strcpy

  // Accessing modified members
  printf("Person 2: Name = %s, Age = %d, Height = %.1f\n", person2.name, person2.age, person2.height);

  // Using a pointer to struct
  struct Person *ptr = &person1;
  printf("Accessing via pointer: Name = %s, Age = %d, Height = %.1f\n", ptr->name, ptr->age, ptr->height);

  // Array of structs
  struct Person people[2] = {person1, person2};
  for (int i = 0; i < 2; i++)
  {
    printf("Person %d: Name = %s, Age = %d, Height = %.1f\n", i + 1, people[i].name, people[i].age, people[i].height);
  }

  return 0;
}
