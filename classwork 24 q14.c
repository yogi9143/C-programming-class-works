Find out the error and show the output

void main()
{
int a[20][20],c[20][20],i,j,r1,c1;
clrscr();
printf("\n Enter the number of rows and column of a matrix: \n");
scanf("%d",&r1,&c1);
printf("Enter the elements of matrix :");
for(i=0;i<r1;i++)
{
for(j=0;j<r1;j++)
scanf("%d",&a[i][j]);
}
printf("The elements of matrix are :");

for(i=0;i<r1;i++)
{
           Printf {“\n”);
for(j=0;j<c1;j++)
printf("\t%d",&a[i][j]);
}
printf("\n Transpose Matrix is\n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
{
c[i][j]=a[j][i]; /* inverse rows and column */
printf("%d\t",c[i][j]);
}
}
getch();
}



#include <stdio.h>
#include <conio.h>

void main()
{
    int a[20][20], c[20][20], i, j, r1, c1;
    clrscr();
    printf("\n Enter the number of rows and columns of a matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of matrix: ");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix are:\n");
    for(i = 0; i < r1; i++)
    {
        printf("\n");
        for(j = 0; j < c1; j++)
        {
            printf("\t%d", a[i][j]);
        }
    }
    printf("\nTranspose Matrix is:\n");
    for(i = 0; i < c1; i++)
    {
        printf("\n");
        for(j = 0; j < r1; j++)
        {
            c[i][j] = a[j][i]; /* inverse rows and columns */
            printf("%d\t", c[i][j]);
        }
    }
    getch();
}


Enter the number of rows and columns of a matrix: 2 3
Enter the elements of matrix: 1 2 3 4 5 6
The elements of matrix are:
        1       2       3
        4       5       6
Transpose Matrix is:
1       4
2       5
3       6
