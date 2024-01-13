#include <stdio.h>
#include <stdbool.h> // For bool type
#include <limits.h>  // For limits of integral types
#include <float.h>   // For limits of floating point types

int main()
{
    // Integer types
    int intVar = 10;
    short shortVar = 20;
    long longVar = 30L;
    unsigned int unsignedIntVar = 40U;

    // Floating point types
    float floatVar = 50.0f;
    double doubleVar = 60.0;
    long double longDoubleVar = 70.0L;

    // Character type
    char charVar = 'A';

    // Boolean type
    bool boolVar = true;

    // Void type - cannot be instantiated, but pointer to void can be used
    void *voidPointer;

    // Derived types
    int intArray[5] = {1, 2, 3, 4, 5}; // Array
    int *intPointer = &intVar;         // Pointer
    struct
    {
        int x;
        int y;
    } point = {1, 2}; // Structure

    // Printing variables
    printf("Integer: %d, Short: %hd, Long: %ld, Unsigned: %u\n", intVar, shortVar, longVar, unsignedIntVar);
    printf("Float: %f, Double: %lf, Long Double: %Lf\n", floatVar, doubleVar, longDoubleVar);
    printf("Char: %c, Bool: %d\n", charVar, boolVar);
    printf("Array Element: %d, Pointer Value: %d, Struct: {x: %d, y: %d}\n", intArray[0], *intPointer, point.x, point.y);

    return 0;
}
