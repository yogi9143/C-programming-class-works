Program to find student details using nested structure 

#include <stdio.h>

struct address {
    char street[50];
    char city[50];
    char state[50];
    char country[50];
    int pincode;
};

struct student {
    char name[50];
    int roll_no;
    int age;
    struct address addr;
};

int main() {
    struct student s1;

    // Get student details from user
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter street name: ");
    scanf("%s", s1.addr.street);

    printf("Enter city name: ");
    scanf("%s", s1.addr.city);

    printf("Enter state name: ");
    scanf("%s", s1.addr.state);

    printf("Enter country name: ");
    scanf("%s", s1.addr.country);

    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode);

    // Display student details
    printf("\nStudent Details\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Age: %d\n", s1.age);
    printf("Address: %s, %s, %s, %s - %d\n", s1.addr.street, s1.addr.city, s1.addr.state, s1.addr.country, s1.addr.pincode);

    return 0;
}
