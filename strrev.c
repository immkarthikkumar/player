#include<stdio.h>
#include<string.h>
int main()
{
char k[100], temp;
int n,m=0;
printf("\n Enter the string :");
gets(k);
n=0;
m=strlen(k)-1;
while(n<m) 
{
temp=k[n];
k[n]=k[m];
k[m]=temp;
n++;
m--;
}
 printf("\n Reverse string is :%s",k);
 return (0);
}
