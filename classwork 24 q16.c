Find out the error and show the output

void main()
{
	char str1[30],str2[30];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	get(str2);
	if(strcmp(str1,str2)=0)
	{
		print("Both strings are equal");
	else
		printf("Strings are unequal");
	}
}


#include <stdio.h>
#include <string.h>

void main()
{
    char str1[30], str2[30];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if(strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Strings are unequal");
    }
}


Enter first string: Hello
Enter second string: World
Strings are unequal
