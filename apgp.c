#include <stdio.h>
 
int main(void) {
	int n,s,d,sum=0,i,res=0;
	scanf("%d%d%d",&n,&s,&d);
	sum=s;
	res=s;
	printf("%d \t  %d\n",sum,res);
	for(i=1;i<n;i++)
	{
		sum=sum+d;
  	res=(res*d);
		printf("%d \t  %d \n",sum,res);
	}
	return 0;
}
