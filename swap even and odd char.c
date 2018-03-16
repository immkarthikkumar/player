#include<stdio.h>
void main()
{
	char k[20],t;
	int i,l;
	printf("Enter the String:");
	scanf("%s",&k);
	l=strlen(k);
	for(i=0;i<l;i=i+2)
	{
		t=k[i];
		k[i]=k[i+1];
		k[i+1]=t;
	}
	printf("%s",k);
}
