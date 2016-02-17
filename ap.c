#include <stdio.h>
 
int main(void) {
	int n,s,d,sum=0,i;
	scanf("%d%d%d",&n,&s,&d);
	sum=s;
	printf("%d \n",sum);
	for(i=1;i<n;i++)
	{
		sum=sum+d;
		printf("%d \n",sum);
	}
	return 0;
	}
