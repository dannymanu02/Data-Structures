#include<stdio.h>
#include<stdlib.h>
int r[100],s,d,q,i;
main()
     {  printf("enter the decimal number");
        scanf("%d",&d);
       
       printf("the decimal number=%d\n",d);
       
       fun(d,q);	          
       printf("the binary of the given decimal element is\n");
       
       for(i=i-1;i>=0;i--)
          { printf("%d",r[i]);
		  }
       
    }
    
fun(int d,int q)
    { for(i=0;d>=1;i++) 
	     { q=(d/2);
           r[i]=d-(2*q);
           d=q; 
        }
	}
