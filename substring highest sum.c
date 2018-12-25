#include<stdio.h>
#include<time.h>
#define s 200
main()
     { clock();
	  
	  int a[s],b[s],big,n,i,j,k,p,q;
      float t;
      
       printf("enter the size of array");
       scanf("%d",&n);
       
       printf("enter the array elements");
       for(i=0;i<n;i++)
          { scanf("%d",&a[i]);
		  }
		  
	   k=0;
		  
	   for(i=0;i<n;i++)
	       { for(j=i+1;j<n;j++)
	            { b[k]=a[i]+a[j];
				}
				
			 for(p=0;p<k;p++)
			    { for(q=i+1;q<k;q++)
			         { if(a[p]==a[q])
			             { a[q]=a[q+1];
						 }
					 }
				}
		   }
		   
		big=b[0];
		
		for(i=0;i<k;i++)
		   { if(b[i]>big)
		       { big=b[i];
			   }
		   }
		   
		printf("the highest sum of sub array is %d",big);
		t=clock();
		printf("time taken to execute is %f",t);
		   
	 }
