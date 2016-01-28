#include <stdio.h>
#include <math.h>

int main(void) 
{
	int i=0,num;
	scanf("%d",&num);
	if(num==0)
	{
		i=1;
	}
	else
	{
		while(pow(2,i)<num)
		{
			i++;
		}
	}
	printf("%d",i);
	return 0;
}
