#include<stdio.h>
void main()
{
    int m,n,i,j;
    int a[10][10],transA[10][10];
    
    printf("Enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    int a[10][10],transA[10][10];
    printf("Enter the %d elements of the matrix\n",m*n);

    //Read the matrix A
    for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    
    printf("\nThe given matrix is \n");
    for (int i = 0; i < m; i++)
    { 
        for(int j = 0;j < n; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    //Transpose the matrix
    for(int i=0; i < m; i++)
        for(int j = 0;j < n; j++)
        transA[j][i] = a[i][j];

    printf("\nThe transpose matrix is \n");
    for (int i = 0; i < n; i++)
    { 
        for(int j = 0;j < m; j++)
            printf("%d ",transA[i][j]);
        printf("\n");
    }
}