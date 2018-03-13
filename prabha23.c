#include<stdio.h>
#include<conio.h>
void main()
char str[1000],i,c=0;
printf("enter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
c++;
}
}
printf("%d",c);
}
}
}
