#include<stdio.h>
main()
{
	int c[3],temp=0,t,m,n,s,k=0,a[3],i,j;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(s=0,j=2;j<=(a[i]/2);j++)
		{
			if(a[i]%j==0)
			{
				
				s=s+1;
			}
			
		}			
		c[k]=s;
		k++;
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",c[i]);
	}
	for(m=0;m<3;m++)
	{
		for(n=m+1;n<3;n++)
		{
			if(c[m]>c[n])
			{
				
				t=a[m];
				a[m]=a[n];
				a[n]=t;
				
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf(" \n %d",a[i]);
	}
}

