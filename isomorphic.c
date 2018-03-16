#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100],b[100];
	scanf("%s %s",a,b);
	int m,n,i,j,u,k,l,x,y,z,c=0;
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
	for(j=i+1;j<m;j++)
	{
	u=a[i];
	k=a[j];
	l=b[i];
	x=b[j];
    y=u-k;
	z=l-x;
	if(y==z)
			{
				c=1;
			}
			else
			{
				c=0;
				break;
			}
		}
	}
	}
	if(c==1)
	{
		printf("yes,it is isomorphic");
	}
	else
	{
		printf("no,it is not isomorphic");
	}
	return 0;
}
