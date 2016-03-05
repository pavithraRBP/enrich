#include <stdio.h>
 
int main(void) {
	int a[100],n,i,temp,value,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(a[i]>value)
		{
			temp=i;
			{
				for(j=1;j<n;j++)
				{
					if(a[i+j]==a[i])
					{
						temp=i+j;
					}
				}
 
			}
			printf("%d",temp);
			break;
		}
		else
		{c++;
		}
 
	}
	if(c==n)
	{
		printf("-1");
	}
	
	return 0;
}
 
