#include <stdio.h>
 
int main(void) {
	int array[100],i,n,pos,value;
	printf("enter the no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);//array value is obtaind
	}
	scanf("%d",&pos);//position where element bas to b insertd
	scanf("%d",&value);//value to b inserted
	for(i=n;i>=(pos);i--)
	{
		array[i]=array[i-1];
	}
	array[pos-1]=value;
	for(i=0;i<=n;i++)
	{
 
		printf("%d",array[i]);
	}
	return 0;
}
