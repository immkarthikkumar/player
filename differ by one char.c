#include<stdio.h>
#include<string.h>
int main()
{
char k1[30],k2[30];
int i,j=0,count=0,flag=0,n;
printf("\nEnter 2 strings:");
scanf("%s%s",k1,k2);
n=strlen(k1);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
if(k1[i]==k2[j])
{
count++;
i++;
}
else
{
  flag++;
}
}
}
if(flag==1)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
