#include<stdio.h>
int input()
{
    printf("Started input\n");
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("Ended input\n");
    return n;
}

int compute(int n)
{
    printf("Started compute()\n");
    if(n>0)
        printf("%d is a positive number\n",n);
    else if(n<0)
        printf("%d is a negative number\n",n);
    else
        printf("%d is equal to zero\n",n);
    printf("Ended compute()\n");   
    return 0;
}

void main()
{
    int n = input();
    compute(n);
}