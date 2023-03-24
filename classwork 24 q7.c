Mr. Johnson would like to know how many As, Bs, Cs, Ds, and Fs his students received on a test. He has n  students who took the test.
 He would like to enter the student number and the number grade for the test for each student using structure. Develop the solution to print out each student’s student number, number grade and the total number of As, Bs, Cs, Ds, and Fs. His grading scale is as follows: 90–100 is an A, 78–89 is a B, 65– 77 is a C, 50–64 is a D, 
and below 50 is an F. 


#include <stdio.h>

typedef struct {
    int studentNumber;
    int grade;
} Student;

int main() {
    int n, numAs = 0, numBs = 0, numCs = 0, numDs = 0, numFs = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the student number and grade for student %d:\n", i+1);
        printf("Student Number: ");
        scanf("%d", &students[i].studentNumber);
        printf("Grade: ");
        scanf("%d", &students[i].grade);

        if (students[i].grade >= 90) {
            numAs++;
        }
        else if (students[i].grade >= 78) {
            numBs++;
        }
        else if (students[i].grade >= 65) {
            numCs++;
        }
        else if (students[i].grade >= 50) {
            numDs++;
        }
        else {
            numFs++;
        }
    }

    printf("\n\nStudent Grades Summary\n");
    printf("=======================\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d - Student Number: %d, Grade: %d\n", i+1, students[i].studentNumber, students[i].grade);
    }
    printf("\nNumber of As: %d\n", numAs);
    printf("Number of Bs: %d\n", numBs);
    printf("Number of Cs: %d\n", numCs);
    printf("Number of Ds: %d\n", numDs);
    printf("Number of Fs: %d\n", numFs);

    return 0;
}
