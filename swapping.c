#include<stdio.h>
void main()
{
    int a, b, temp, quit;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    printf("value of a and b before swapping\na : %d\nb : %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("value of a and b before swapping\na : %d\nb : %d\n", a, b);    
    printf("To exit press any key");
    scanf("%d", &quit);
}