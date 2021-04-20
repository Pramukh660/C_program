#include<stdio.h>
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
}
void main()
{
    int low=0,mid=0,high,found=0,n,key;
    printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of array\n",n);
    sort(a,n);
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\nEnter the element to find\n");
    scanf("%d",&key);
    high=n-1;
    while (low<=high && !found)
    {
        mid = (low+high)/2;
        if(key==a[mid])
            found=1;
        else if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    if(found==1)
        printf("The element is found at position %d\n",++mid);
    else
        printf("The element not found\n");
}