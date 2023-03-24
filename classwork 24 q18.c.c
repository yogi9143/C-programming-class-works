#include <stdio.h>

struct address {
    char street[50];
    char city[50];
    char state[50];
    char zip[10];
};

struct person {
    char name[50];
    int age;
    struct address addr;
};

int main() {
    struct person p1;

    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter street: ");
    scanf("%s", p1.addr.street);
    printf("Enter city: ");
    scanf("%s", p1.addr.city);
    printf("Enter state: ");
    scanf("%s", p1.addr.state);
    printf("Enter zip: ");
    scanf("%s", p1.addr.zip);

    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Address: %s, %s, %s %s\n", p1.addr.street, p1.addr.city, p1.addr.state, p1.addr.zip);

    return 0;
}
