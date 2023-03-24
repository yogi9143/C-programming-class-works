
To generate employee payroll for an organization using structure.

Define employee structure with fields empid, ename, basic, hra, da, it, gross and
netpay
Read number of employees n
Read empid, ename, and basic for n employees in an array of structure.
For each employee, compute hra = 2% of basic
da = 1% of basic
gross = basic + hra + da it = 5% of basic
netpay = gross - it
Print empid, ename, basic, hra, da, it, gross and netpay for all employees

#include <stdio.h>

struct Employee {
    int empid;
    char ename[50];
    float basic;
    float hra;
    float da;
    float it;
    float gross;
    float netpay;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee emp[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empid);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Basic salary: ");
        scanf("%f", &emp[i].basic);
        
        emp[i].hra = 0.02 * emp[i].basic;
        emp[i].da = 0.01 * emp[i].basic;
        emp[i].it = 0.05 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].netpay = emp[i].gross - emp[i].it;
    }
    
    printf("\nPayroll details for %d employees:\n", n);
    printf("EmpID\tName\tBasic\tHRA\tDA\tIT\tGross\tNetpay\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", 
               emp[i].empid, emp[i].ename, emp[i].basic, emp[i].hra, emp[i].da, emp[i].it, emp[i].gross, emp[i].netpay);
    }
    
    return 0;
}
