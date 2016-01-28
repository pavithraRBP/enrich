#include <stdio.h>
 
int main(void) 
{
    int num,rem,base,arr[40],i=0,j;
     printf("Enter the value: ");
     printf("\nEnter the base: ");
     scanf("%d%d",&num,&base);
    while(num>0){
        rem=num%base;
        if(rem<10)
        {
        	arr[i]=rem+48;
        }
        else
   		{     
        	arr[i]=rem+55;
        } 
        num=num/base; 
    	i++;
    }
    for(j=i-1;j>=0;j--)
    {
    	printf("%c",arr[j]);
    }
    	return 0;
}
