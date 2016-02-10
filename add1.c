#include <stdio.h>
int summer(int a,int b,int c)
{
	int add;
	add= a+b+c;
	return add;
}
int main(void)
{
	int a=2,b=3,c=4,sum,k;
	sum=a+b+c;
	printf("%d \n",sum);
	int p[]={2,3,4},sum1=0,i;
	for(i=0;i<3;i++)
	{
		sum1=p[i]+sum1;
	}
	printf("%d \n",sum1);
	k=summer(a,b,c);
	printf("%d \n",k);
 
}
