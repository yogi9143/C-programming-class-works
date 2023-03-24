Find out the error and show the output
void main()
{
		intarr[3][4];
		inti,j,k;
		printf("Enter array element");
		for(i=0;i<3;i++)
		{
			for(j=0; j < 4; j++)
			{
				scanf("%d",arr[i][j]);
			}
		}
	for(i=1; i < 3; i++)
		{
		for(j=0; j < 4; j++)
		{
			printf(“%c”,arr[i][j]);
			}
		}
		getch();
}


#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[3][4];
    int i, j;
    
    printf("Enter array elements: ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Array elements are:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    getch();
}


Enter array elements: 1 2 3 4 5 6 7 8 9 10 11 12
Array elements are:
1 2 3 4
5 6 7 8
9 10 11 12
