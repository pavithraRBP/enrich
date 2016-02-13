#include<stdio.h>
main()
{
	int f,a=-1,b=1,i,k,m,n,p[200],q[200],d,r,count,j=0;
	scanf("%d",&n);
	while(f<n)
	{	
		f=a+b;
		a=b;
		b=f;
		p[i]=f;
		i++;
	}
	k=i-2;
	d=p[k];
	m=n-p[k];
	while(m>0)
	{
		for(i=0;i<k;i++)
		{
			q[j]=m;
			j++;
			if(p[i]>m)
			{
				d=p[i-1];
				r=m-d;
				m=r;
				i=k+1;
			}
		}
		
	}

count=j;
for(i=0;i<j;i++)
	printf("%d",q[i]);

}
