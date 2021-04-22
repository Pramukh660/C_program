#include<stdio.h>
void main()
{
    int m,n,i,j,sum=0;
    int a[10][10];
    
    printf("Enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the %d elements of the matrix\n",m*n);

    //Read the matrix A
    for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);

    //printing the matrix
    for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }

    printf("The diagonal elements are: \n");
    for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        if(i==j)
        {
            printf("%d\t",a[i][j]);
            sum += a[i][j];
        }
    
    printf("\nThe sum of diagonal elements is: %d",sum);
}