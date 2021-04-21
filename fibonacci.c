#include<stdio.h>
void main()
{
    int count=0,n,a=0,b=1;
    printf("Enter the number of terms in fib series\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if(a==0 && b==1)
            printf("%d %d ",a,b);
        count = a+b;
        a=b;
        b=count;
        printf("%d ",count);
    }
}