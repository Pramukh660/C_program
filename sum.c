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

int loop(int n) /// Using for loop
{
    int sum=0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    return sum;
}

void main()
{
    int n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    printf("Sum of first %d natural no is %d\n",n,recursion(n));
    printf("Sum of first %d natural no is %d\n",n,direct(n));
    printf("Sum of first %d natural no is %d\n",n,loop(n));
}