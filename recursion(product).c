#include<stdio.h>

float product(float m, float n)
{
    float pro=0;
    if(pro == (m*n))
        return 0;
    else
    { 
        pro = m*n;
        return pro + product(0,0);
    }
}

void main()
{
    float m,n,answer;
    printf("Enetr the two number to multiply\n");
    scanf("%f%f",&m,&n);
    answer = product(m,n);
    printf("The product of %f and %f = %f",m,n,answer);

}
