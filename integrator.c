#include<stdio.h>
#include<math.h>
#define e 2.718
float intg(float a, float b);
int main()
{  
    auto int choice,*pf;
    auto float k,up,low;
	printf("This is an sine integrator \n");
	printf("Please enter your upper and lower limit \n");
	scanf("%f %f",&up,&low);
	printf("%f",intg(up,low));     
     return 0;
}
//integrator
float intg(float a,float b)
{
	float h,sum=0,l=0;
		h=(b-a)/1000.00;
		do
		{
			sum+=(0.5*h*(sin(a+l)+sin(a+l+h)));
			l+=h;
		}
		while((l+h)<=b);
		return(sum);
}