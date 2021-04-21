#include<stdio.h>
void main()
{
    float n1,n2,res;
    char op;
    printf("Enter the numbers\n");
    scanf("%f%c%f", &n1, &op, &n2);
    printf("1-add, 2-sub, 3-mul, 4-div\n");
    switch(op)
    {
        case '1':
            res=n1+n2;
            printf("%f = %f %c %f", res, n1, op, n2);
            break;
        case '2':
            res=n1-n2;
            printf("%f = %f %c %f", res, n1, op, n2);
            break;
        case '3':
            res=n1*n2;
            printf("%f = %f %c %f", res, n1, op, n2);
            break;
    }
}