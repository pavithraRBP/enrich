#include <stdio.h>
 
int main(void) {
	int i,j=2,s=0,num,c=0;
	scanf("%d",&num);
 
	for(i=(num+1);((c==0)&&(i<num+100));i++)
	{ 
		while(j<=i)
		{
			if(i%j==0)
			{
				s=s+1;
			}
			j++;
		}
		if(s==1)
		{
			printf("%d",i);
			c=c+1;
 
		}
	}   
	return 0;
}
