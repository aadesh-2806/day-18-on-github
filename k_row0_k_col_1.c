#include<stdio.h>
#include<math.h>

void main()
{
	
	int i,a[50][50],r,j,n;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("enter no %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<n;i++)	
	{
		r=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i][j]==0 && a[j][i]==1)
			{
				r++;
			}
			else
			{
				break;
			}
		}
		if(r==n-i-1 && i!=n-1)
		{
			printf("%d ",i);
		}
	}
	
	getch();
	
}	
