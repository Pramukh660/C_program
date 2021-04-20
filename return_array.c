#include<stdio.h>
int fun(int array[])
{
    printf("enter 10 elements of array:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d",&array[i]);
    return 0;
}

void main()
{
    int a[] = {1};
    fun(a);
    printf("The aarray is:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t",a[i]);
}