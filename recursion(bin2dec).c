#include<stdio.h>
#include<math.h>
int pos = 0;
int b2d(long long int n)
{
    if(n==0)
        return 0;
    else
        return n%10 * pow(2,pos++) + b2d(n/10);
}
void main()
{
    long long int x;
    printf("Enter the binary number to find decimal equivalent\n");
    scanf("%lld",&x);
    printf("%d",b2d(x));
}