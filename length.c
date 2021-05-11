#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char a[100];
	
	printf("hello\nenter string=");
		
	gets(a);
	
	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	printf("%d",i);
	
	getch();
	
}
