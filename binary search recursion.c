#include<stdio.h>
#include<stdlib.h>
int a[20],n,i,l,h,m,key;
main()
     { printf("enter the size of array");
       scanf("%d",&n);
       
       printf("enter the array elements");
       for(i=0;i<n;i++)
          { scanf("%d",&a[i]);
		  }
		  
		printf("enter the search element");
		scanf("%d",&key);
		
		printf("array is \n");
		for(i=0;i<n;i++)
		   { printf("%d\t",a[i]);
		   }
		   
		mid(0,n-1);
	 }
	 
mid(int l,int h)
   { m=(l+h)/2;
     
     if(l>h)
       { printf("element not found");
         exit(0);
	   }
   
     if(a[m]>key)
       { mid(0,m-1);
	   }
	   
	 if(a[m]<key)
	   { mid(m+1,n-1);
	   }
	   
	 if(a[m]==key)
	    { printf("the element %d is found in position %d",i,m+1);
	      exit(0);
		}
   }
