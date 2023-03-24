Write a program to print n prime numbers then find the nth Prime number


#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, count = 0, num = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d prime numbers:\n", n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    printf("Enter the value of n again: ");
    scanf("%d", &n);

    count = 0;
    num = 2;

    while (count < n) {
        if (isPrime(num)) {
            count++;
            if (count == n) {
                printf("The %dth prime number is %d\n", n, num);
                break;
            }
        }
        num++;
    }

    return 0;
}











