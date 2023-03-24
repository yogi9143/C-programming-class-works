Program to find Employee no, name, salary, doj using nested structure

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    int emp_no;
    char name[50];
    float salary;
    struct date doj;
};

int main() {
    struct employee emp;
    
    printf("Enter employee number: ");
    scanf("%d", &emp.emp_no);
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    
    printf("Enter date of joining (DD MM YYYY): ");
    scanf("%d %d %d", &emp.doj.day, &emp.doj.month, &emp.doj.year);
    
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.emp_no);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Date of Joining: %d-%d-%d\n", emp.doj.day, emp.doj.month, emp.doj.year);
    
    return 0;
}
