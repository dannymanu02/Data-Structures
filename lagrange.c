#include<stdio.h>
main()
     { float x[20],y[20],xf,N,d,term;
       int i,j,n;
       
       printf("enter the number of data points");
       scanf("%d",&n);
       
       printf("enter the x data");
       for(i=0;i<n;i++)
           { scanf("%f",&x[i]);
		   }
		   
	   printf("enter y data");
	   for(i=0;i<n;i++)
	       { scanf("%f",&y[i]);
		   }
		   
	    printf("enetr x value");
	    scanf("%f",&xf);
		   
		for(j=0;j<n;j++)
		   { N=1;
		     d=1;
		     
		     for(i=0;i<n;i++)
		        { if(j!=1)
		          {
				  
				  N=N*(xf-x[i]);
		          d=d*(x[j]-x[i]);
		         }
				}
				
			 term=term+((N/d)*y[j]);
		   }
		   
		printf("term=%f",term);
	 }
