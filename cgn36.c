#include<stdio.h>
#include<conio.h>
void ma(void) {
	char str[50];
	gets(str);
	int counter,count=0,countSpaces;
	for(counter=0;str[counter]!='\0';counter++)
	{
	if((str[counter]>='0' && str[counter]<='9')
	|| (str[counter]>='A' && str[counter]<='Z')
	|| (str[counter]>='a' && str[counter]<='z')
          || str[counter]==' ' || str[counter]== '.')
            countSpaces++;
          else
            count++;
	}
	printf("%d",count);
	return 0;
}
in()
