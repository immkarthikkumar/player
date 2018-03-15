#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,str[30],l,k;
	char r[20];
	printf("Enter the Roman number:");
	scanf("%s",r);
	l=strlen(r);
	for(i=0;i<l;i++)
	{
		switch(r[i])
		{
			case 'I':
				str[i]=1;
				break;
			case 'V':
				str[i]=5;
				break;
			case 'X':
				str[i]=10;
				break;
		}
	}
 k = str[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(str[i] > str[i - 1])
      {
     k = k - str[i - 1];
      }
      if(str[i] <= str[i - 1])
      {
     k = k + str[i - 1];
      }
   }
   printf("decimal equivalent is %d", k);
	
}
