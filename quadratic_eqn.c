#include<stdio.h>
#include<math.h>
int main()
{
    char op;
    float a,b,res;
    printf("Enter two numbers with the sign between them to calculate\n");
    scanf("%f%f%c",&a,&b,&op);
    switch(op)
    	{
    	    case '+':
                res = a+b;
                break;
            case '-':
                res = a-b;
                break;
            case'*':
                res = a*b;
                break;    
            case'/':
                res = a/b;
                break;
        }
    printf("%f",res);
    return 0;
}