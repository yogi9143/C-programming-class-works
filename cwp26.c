To find the sum of the digits of a given number using while statement.	.


Read num
Initialize sum to 0.
Repeat until num = 0
Obtain last digit d = num % 10 Add d to sum
num = num / 10
Print sum

#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    
    printf("Sum of digits: %d", sum);
    
    return 0;
}





