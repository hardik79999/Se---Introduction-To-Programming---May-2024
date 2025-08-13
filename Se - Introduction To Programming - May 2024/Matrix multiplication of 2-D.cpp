#include <stdio.h>

int main() 
{
    int mat1[2][2], mat2[2][2];
    int i, j;


    printf("---------Matrix: 1----------\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("Enter elements : ");
            scanf("%d", &mat1[i][j]);
        }
    }

 
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    
    printf("\n---------Matrix: 2----------\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("Enter elements : ");
            scanf("%d", &mat2[i][j]);
        }
    }


    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

