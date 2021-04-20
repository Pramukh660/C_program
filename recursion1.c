#include<stdio.h>

int recursion(int n) //recursive function till n=1
{
    if(n==1)
        return 1;
    else
        return n + recursion(n-1);
}

int direct(int n)
{
    return n*(n+1)/2; //using formula of summation of n
}

void main()
{
    int n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    printf("Sum of first n natural no id %d\n",recursion(n));
    printf("Sum of first n natural no id %d",direct(n));
}