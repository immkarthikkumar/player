#include <stdio.h>
void main()
 { 
 	int m,n,i,c=0;
     printf("Enter two numbers:");
     scanf("%d %d",&m,&n);
     while (m<n)
     { 
     c=0;
      for(i=2;i<=m/2;i++)
       { 
       	if(m%i==0) 
       	{ 
       		c++;
       		 break; 
       		 }
       	} 
      if(c==0)
      printf("%d ",m); 
      m++;
       }
     }
