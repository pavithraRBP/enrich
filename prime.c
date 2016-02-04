#include <stdio.h>
 
int main(void) {
	int i,j,s,num,c=0;
	scanf("%d",&num);
 
	for(i=(num+1);(c==0);i++)
	{ 
		for(j=2,s=0;j<i;j++)
		{
			if(i%j==0)
			{
				s=s+1;
			}
			j++;
		}
		if(s==0)
		{
			printf("%d",i);
			c=c+1;
 
		}
	}   
	return 0;
}
