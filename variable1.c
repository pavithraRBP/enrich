#include <stdio.h>

int main(void) {
	// your code g
	 char a[100],b[100];
	int c=0,i,j,temp=0,n,d=0;
	printf("enter the no.of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if((a[i]>64)&&(a[i]<91))
		{
			c++;
			b[d]=a[i];
		
			d++;
			
		}	
	}
	for(i=0;i<d;i++)
	{
		for(j=i+1;j<d;j++)
		
	
			{ 
			if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
	}
	for(i=0;i<d;i++)
	printf("%d",b[i]);
	
	for(i=0;i<d;i++)
		{
			for(j=i+1;j<d;j++)
				{
					if (b[i]==b[j])
					{
						c--;
					}		
				}
		}
	printf("%d",c);

	return 0;
}
