#include<stdio.h>
#include<conio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>=65&&c<=90)||(c>=97&&c<=122))
printf("alphabet");
else
printf("not an alphabet");
return 0;
}
