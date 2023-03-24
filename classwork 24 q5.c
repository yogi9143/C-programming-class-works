Program to store 3 book records in one structure / using array of structure 


#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book b[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter title of book %d: ", i+1);
        scanf("%s", b[i].title);

        printf("Enter author of book %d: ", i+1);
        scanf("%s", b[i].author);

        printf("Enter price of book %d: ", i+1);
        scanf("%f", &b[i].price);
    }

    printf("\nBook details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d\n", i+1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
        printf("\n");
    }

    return 0;
}
