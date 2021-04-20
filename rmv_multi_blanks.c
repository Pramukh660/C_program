#include<stdio.h>
void main()
{
    int i=0,j=0;
    char src[100],dest[100];
    printf("Enetr a sentence with multiple blanks\n");
    gets(src);
    while (src[i]!='\0')
    {
        dest[j]=src[i];
        j++;
        i++;
        if (src[i-1]==' ')
            for(;src[i]==' ';i++){}
    }
    dest[j]='\0';
    printf("The correct string is\n");
    puts(dest);
}