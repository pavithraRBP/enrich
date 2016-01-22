#include <stdio.h>
 
int main(void)
{
 
	int num,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
	return 0;
}
 
