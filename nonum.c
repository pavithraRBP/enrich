#include<stdio.h>
#include<string.h>
int main()
{
char str[10][32]={"a","b","32","b3"},b[10][32];
int i=0,j=0;
for(i=0;i<5;i++)
	{
	isalpha(str[i]);
	if(isalpha(str[i])==0)
	{
		
	strcpy(b[j],str[i]);	
	printf("%s\n",b[j]);
	j++;
	}
}
}
int isalpha(char str[])
{
int c=0,i,n=strlen(str);
for(i=0;i<n;i++)
	{
	if(((str[i]>64)&&(str[i]<91))||((str[i]>96)&&(str[i]<123)))
		{
		c++;
		}
}
if(c!=0)
return 0;
	
}
	
