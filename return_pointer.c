#include<stdio.h>
void fun2(int *p)
{
    for(int i=0; i<3; i++)
        printf("%d\t",*(p+i));
    *(p+3)=4;
    printf("\n");
}
void main()
{
    int array[] = {1,2,3};
    fun2(array);
    for(int i=0; i<4; i++)
        printf("%d\t",array[i]);
}