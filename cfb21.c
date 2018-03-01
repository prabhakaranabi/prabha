#include<stdio.h>
#include<conio.h>
void main()
int n,m,d,t,i,sum=0;
printf("enter the first number and \n differnce and \n number of terms")
scanf("%d",&n,&m,&d);
for (i=1;i<m;i++)
{
t=n+(m-1)*d;
sum=sum+t;
}
printf ("%d",&m);
}
}}
