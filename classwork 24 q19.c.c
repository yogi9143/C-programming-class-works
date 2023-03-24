#include <stdio.h>

void addNumbers();

int main() {
    addNumbers();
    return 0;
}

void addNumbers() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);
}
