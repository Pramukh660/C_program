#include<stdio.h>
void compute(int n);
void input()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    return n;
}
void compute(int n)
{
    if(n>0)
        printf("%d is a positive number\n",n);
    else if (n<0)
    {
        printf("%d is a negative number\n",n);
    }
    else
        printf("%d is equal to zero\n",n);    
}
void main()
{
    input(int n);
    compute(int n);
}