#include<stdio.h>
#include<string.h>
int main()
{
char k[100],temp;
int i,j=0;
printf("\n Enter the string :");
gets(k);
i=0;
j=strlen(k)-1;
while(i<j) 
{
temp=k[i];
k[i]=k[j];
k[j]=temp;
i++;
j--;
}
printf("\n Reverse string is :%s",k);
return (0);
}
