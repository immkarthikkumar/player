#include<stdio.h>
#include<string.h>
 
void main()
{
   char k[3000];
   int i;
   printf("Enter the string");
   scanf("%s",k);
   i=strlen(k);
   k[i]='.';
printf("%s",k);
}
