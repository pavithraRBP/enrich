#include <stdio.h>
void convert(char*res,int len,char*temp)
{
	int i,j;
	if(len==0)
	{
		res[len]=temp[0]+32;
	}
	else
	{
		res[len]=temp[0]-32;
	}
	for(i=len+1,j=0;temp[j]!='\0';i++,j++)
	{
	
		res[i]=temp[j];
	}
	res[i]='\0';
}
	
int main(void) {
	// your code goes here
	char str[50],res[50],temp[20];
	int len=0,i=0,j=0;
	scanf("%s",str);
	for(i=0,j=0;str[i]!='\0';i++,j++)
	
	{
		if(str[i]!=' ')
		{
			temp[j]=str[i];
		}
		else{
			temp[j]='\0';
			convert(res,len,temp);
			len=len+j;
		}
	}
	
	printf("%s",res);
	return 0;
}
