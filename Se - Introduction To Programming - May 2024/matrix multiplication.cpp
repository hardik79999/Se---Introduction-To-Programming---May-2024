#include <stdio.h>

int main() 
{
    int a[2][2], b[2][2], result[2][2];
    int i, j, k;

 
    printf("Enter elements for Matrix 1:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nEnter elements for Matrix 2:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("Enter element: ");
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication 
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            result[i][j] = 0;
            for(k = 0; k < 2; k++) 
			{
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

 
    printf("\nResult: Multiplication Matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

