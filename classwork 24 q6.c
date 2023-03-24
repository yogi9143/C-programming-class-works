1. Write a program to enter the marks of a student in four subjects. Then calculate the total and aggregate, display the grade obtained by the student.
 If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. 
If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. Else the grade is Fail.


#include <stdio.h>

int main() {
    int marks[4];
    float total = 0.0, aggregate = 0.0;

    printf("Enter marks of the student in four subjects:\n");

    for (int i = 0; i < 4; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    aggregate = (total / 400.0) * 100.0;

    printf("\nTotal marks obtained: %.2f\n", total);
    printf("Aggregate: %.2f\n", aggregate);

    if (aggregate >= 75.0) {
        printf("Grade: Distinction\n");
    }
    else if (aggregate >= 60.0 && aggregate < 75.0) {
        printf("Grade: First Division\n");
    }
    else if (aggregate >= 50.0 && aggregate < 60.0) {
        printf("Grade: Second Division\n");
    }
    else if (aggregate >= 40.0 && aggregate < 50.0) {
        printf("Grade: Third Division\n");
    }
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}


