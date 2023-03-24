#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base, result;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent) {
    double result = 1.0;

    while (exponent > 0) {
        result *= base;
        exponent--;
    }

    return result;
}
