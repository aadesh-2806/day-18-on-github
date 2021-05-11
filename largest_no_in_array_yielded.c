#include<stdio.h>
#include<math.h>

void main()
{	
	long long int i,a[50],b[50][50],t,x,r,j,n;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%lld",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		t=a[i];y=0;
		while(t!=0)
		{
			b[i][y++]=t%10;
			t=t/10;
		}
		for(j=0;j<y;j++)
		{
			for(r=0;r<y-j-1;r++)
			{
				t=b[i][r];
				b[i][r]=b[i][r+1];
				b[i][r+1]=t;
			}
		}
	}
//min//arrofno
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(r=j+1;r<n;r++)
			{
				if(b[i][j]<b[i][r])
				{
					
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		j=0;
		for(t=a[i];t!=0;)
		{
			t=t/10;
			j++;
		}
		b[i]=j;
	}
	
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=i+1;j<n;j++)
		{
			t=t+b[j];
		}
		t=pow(10,t);
		a[i]=a[i]*t;
	}
	t=0;
	for(i=0;i<n;i++)
	{
		t=t+a[i];
	}
	printf("%lld",t);
	
	getch();
}	
