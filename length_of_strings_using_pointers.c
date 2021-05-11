#include<stdio.h>

void main()
{	
	int i,k,n;
	char a[30],*p;
	
	printf("hello aadesh agrawal(2019uec1660)\nenter string=");
	gets(a);
	
	p=a;
	for(i=0;*p!='\0';p++)
	{
		i++;
	}
	printf("%d",i);
	getch();
}
