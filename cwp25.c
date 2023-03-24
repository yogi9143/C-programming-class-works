To implement a simple calculator using switch case statement.

Read the operator symbol and operands n1, n2
If operator = + then calculate result = n1 + n2
Else if operator = – then calculate result = n1 – n2
Else if operator = * then calculate result = n1 * n2
Else if operator = / then calculate result = n1 / n2
Else if operator = % then calculate result = n1 % n2
Else
print "Invalid operator"



#include <stdio.h>

int main() {
    char operator;
    float n1, n2, result;
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c", &operator);
    
    printf("Enter two operands: ");
    scanf("%f %f", &n1, &n2);
    
    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        case '%':
            result = (int)n1 % (int)n2;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }
    
    printf("%.2f %c %.2f = %.2f", n1, operator, n2, result);
    
    return 0;
}
