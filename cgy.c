#inclde<stdio.h>
#inclde<conio.h>
void main()
{char str[1000],str1[50];
int i,j,flag=0;
printf("enter 2 strings");
gets(str);
gets(str1);
for(i=0;str[i]!='\0';i++)
{
for(j=0;str1[j]!='\0';j++)
{
if(str[i]==str1[j])
{
flag=0;
}
else
{
flag=1;
}
}
}
if(flag==0)
{
puts(str);
}
else
{
puts(str1);
}
}

 
