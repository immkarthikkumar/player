#include<stdio.h>
#include<string.h>
void main()
{
	char k[30];
	int i,l;
	printf("Enter the String :");
	scanf("%[^\n]s",&k);
	l=strlen(k);
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
			k[i]=toupper(k[i]);
		}
		if(k[i]==' ')
		{
			k[i+1]=toupper(k[i+1]);
		}
	}
	printf("\n %s",k);
}
