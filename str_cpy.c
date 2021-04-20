#include<stdio.h>
void main()
{
    int i=0,j=0,count=0;
    char str1[50],str2[50],str3[50];
    printf("Enter String 1 :  ");
    gets(str1);
    printf("Enter String 2 :  ");
    gets(str2);
    
    //copy string 1 to 3
    while(str1[i]!='\0')
    {
        str3[count]=str1[i];
        count++;
        i++;
    }

    //add blank space b/w str1 and str2
    str3[count] = ' ';
    count++;

    //copy string 2 to 3
    while(str2[j]!='\0')
    {
        str3[count]=str2[j];
        count++;
        j++;
    }
    
    //Add null character to str3
    str3[count] = '\0';
    
    printf("String 3 =  %s",str3);
}