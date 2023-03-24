Find out the error and show the output

            main()
{
	int i=1,sum=0;
	clrscr();
printf(“Enter the values for n:”);
scanf(“%d”,n);
while(i<=n)
{
sum==sum+i;
i++;
}
printf(“The sum of n numbers is”,sum);
}	


#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    
    printf("The sum of n numbers is %d", sum);
    
    return 0;
}


Enter the value of n: 5
The sum of n numbers is 15
