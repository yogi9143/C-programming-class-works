#include <stdio.h>

int addNumbers(int a, int b);

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = addNumbers(a, b);

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}
