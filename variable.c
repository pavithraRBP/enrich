#include <stdio.h>

int main(void) {
	// your code g
	 char a[100];
	int c=0,i,n;
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
		}	
	}
	printf("%d",c);

	return 0;
}
