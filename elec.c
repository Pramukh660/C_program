#include<stdio.h>
void main()
{
    char name[20];
    float amt, units;
    printf("Enter the numberof units\n");
    scanf("%c",&name);
    if(units<200)
    amt=units*0.80;
    else if(units>200 && units<=300)
    amt=200*0.80+(units-200)*0.90;
    else if(units>300)
    amt=200*0.80+100*0.90+(units-300);
    if(amt>400)
    amt=amt+amt*0.15;
    printf("bill amt = %f",amt);
}