#include<stdio.h>
void main()
{
int k;
scanf("%d",&k);
printf("%d",fact(k));
}
int fact(int k)
{
if(k==0)
return 1;
else
return k*fact(k-1);
}
