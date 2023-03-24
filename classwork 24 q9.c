Write a c program to modify the constant variable in c?

#include <stdio.h>

int main() {
    const int x = 10;  // Declare a constant variable
    int* ptr = (int*) &x;  // Create a pointer to the constant variable

    printf("The original value of x is: %d\n", x);

    *ptr = 20;  // Use the pointer to modify the value of x

    printf("The modified value of x is: %d\n", x);

    return 0;
}











