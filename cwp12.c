Write a program to enter the marks of n student in four subjects using structure. Then calculate the total and aggregate, display the grade obtained by the student. If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. Else the grade is Fail.
Sample Input & Output:
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
Total= 366
Aggregate = 91.5
DISTINCTION
Test cases:
1.      18, 76,93,65
2.      73,78,79,75
3.      98,106,120,-95
4.      96,73, AA,95
5.  	78,59.8,**,79


#include <stdio.h>
#include <string.h>

struct student {
   char name[50];
   int python, cprog, math, physics;
   float total, aggregate;
   char grade[10];
};

int main() {
   int n, i;
   
   printf("Enter the number of students: ");
   scanf("%d", &n);
   
   struct student s[n];
   
   for(i = 0; i < n; i++) {
      printf("\nEnter the details of student %d:\n", i+1);
      printf("Name: ");
      scanf("%s", s[i].name);
      printf("Marks in Python: ");
      scanf("%d", &s[i].python);
      printf("Marks in C Programming: ");
      scanf("%d", &s[i].cprog);
      printf("Marks in Mathematics: ");
      scanf("%d", &s[i].math);
      printf("Marks in Physics: ");
      scanf("%d", &s[i].physics);
      
      s[i].total = s[i].python + s[i].cprog + s[i].math + s[i].physics;
      s[i].aggregate = s[i].total / 4;
      
      if(s[i].aggregate > 75)
         strcpy(s[i].grade, "DISTINCTION");
      else if(s[i].aggregate >= 60 && s[i].aggregate < 75)
         strcpy(s[i].grade, "FIRST DIVISION");
      else if(s[i].aggregate >= 50 && s[i].aggregate < 60)
         strcpy(s[i].grade, "SECOND DIVISION");
      else if(s[i].aggregate >= 40 && s[i].aggregate < 50)
         strcpy(s[i].grade, "THIRD DIVISION");
      else
         strcpy(s[i].grade, "FAIL");
   }
   
   printf("\nDetails of all students:\n");
   for(i = 0; i < n; i++) {
      printf("\nStudent %d:\n", i+1);
      printf("Name: %s\n", s[i].name);
      printf("Marks in Python: %d\n", s[i].python);
      printf("Marks in C Programming: %d\n", s[i].cprog);
      printf("Marks in Mathematics: %d\n", s[i].math);
      printf("Marks in Physics: %d\n", s[i].physics);
      printf("Total: %.2f\n", s[i].total);
      printf("Aggregate: %.2f\n", s[i].aggregate);
      printf("Grade: %s\n", s[i].grade);
   }
   
   return 0;
}
