#include<stdio.h>
#include<string.h>
int main()
{
char str[10][32]={"a","b","a3","a3"},b[10][32],temp,uni[100][100];
int i=0,j=0,c,d,m,e=1;
for(i=0;i<5;i++)
	{
	isalpha(str[i]);
	if(!isalpha(str[i]))
		{
		
		strcpy(b[m],str[i]);	
		printf("%s\n",b[m]);
		m++;
		}
	}
for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		
	
			{ 
			if(strcmp(str[i],str[j])<0)
				{
					strcpy(temp,str[i]);
					strcpy(str[j],str[i]);
					strcpy(str[i],temp);
				}
			}
	}
	for(i=0;i<m;i++)
	printf("%s",str[i]);
	strcpy(uni[0],str[0]);
	for(i=0;i<m;i++)
		{
				if (strcmp(str[i],str[i+1])!=0)
					{
						strcpy(uni[e],str[i+1]);
						e++;
				
					}		
				
		}
for(i=0;i<3;i++)
	printf("%s",uni[i]);
	
}
int isalpha(char str[])
{
int c=0,i,n=strlen(str);
for(i=0;i<n;i++)
	{
	if(((str[i]>64)&&(str[i]<91))||((str[i]>96)&&(str[i]<123)))
		{
		return 0;
		}
}
return 1;
}
	
