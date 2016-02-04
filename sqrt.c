#include <stdio.h>

int main(void) {
	int num;
	float res,a,chk = 0.000001;
	printf("Enter the value :");
	scanf("%d",&num);
	a=1;
	res=num;
	while((res-a) > chk)
	{
		res = (res+a)/2;
		a=num/res; 
	}
	printf("\n sqroot : %f",res);
	
	return 0;
}
