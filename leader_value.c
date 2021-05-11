#include<stdio.h>

void main()
{
	
	int i,a[100],n,s,j,r;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	for(s=0;s<n;s++)
	{
		r=0;
		for(j=s+1;j<n;j++)
		{
			if(a[s]>=a[j])
			{
				r++;
			}
		}
		if(r==(n-1-s))
		{
			printf("%d ",a[s]);
		}
	}
	getch();
	
}	 		
