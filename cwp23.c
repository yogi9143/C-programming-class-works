Find out the logic missing statements and display the final output.
#include <stdio.h>
#include <conio.h>

main()
{
int i, n, d, sum;
clrscr();

printf("Armstrong numbers : "); for(i=2; i<=1000; i++)
{
sum = 0; 
n = i; while(n)
{

sum = sum + (d * d * d); n = n / 10;
}
if (sum == i) printf("%d	", i);
}
getch();
}



include <stdio.h>
#include <conio.h>

int main()
{
int i, n, d, sum;
clrscr();
printf("Armstrong numbers : ");
for(i=2; i<=1000; i++)
{
    sum = 0; 
    n = i;
    while(n)
    {
        d = n % 10;  // Extracting the digit from the given number
        sum = sum + (d * d * d);
        n = n / 10;
    }
    if (sum == i) printf("%d	", i);
}
getch();
return 0;
}