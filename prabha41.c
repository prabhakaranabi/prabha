#include<conio.h>
#include<stdio.h>
void main()har str[50],i,c=0;
printf("enter a character");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'a' &&str[i]<'z')
{
c++;
}
}
printf("%d",c);
}
