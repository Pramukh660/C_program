#include<stdio.h>
void main()
{
    int a=3, b=0;
    printf("Initial value of a is %d\n", a);
    printf("Initial value of b is %d\n", b);
    b=++a;
    printf("Final value of a is %d\n", a);
    printf("Initial value of b is %d\n", b);
}