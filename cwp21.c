#include<stdio.h>
int squarecube(int x);
int main()
{
int a,result;
printf("enter the number :\n");
scanf("%d",&a);
result=squarecube(a);
return result;	
}
int squarecube(int x)
{
int f,q;
f=x*x;
q=x*x*x;
printf("the square of the number  = %d\n",f);
printf("the cube of the number = %d",q);
return 0;	
}
