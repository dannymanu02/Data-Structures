#include<stdio.h>
int n,q,r[100],i;
main()
     { printf("enter the decimal number");
       scanf("%d",&n);
       
       for(i=0;n>=1;i++)
           { r[i]=n%2;
             
             n=n/2;
		   }
		   
		for(i=10;i>=0;i--)
		   { printf("%d",r[i]);
		   }
	 }
