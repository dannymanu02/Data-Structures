#include<stdio.h>
#include<stdlib.h>
main()
     {  int a[20],i,n,l,h,m,key;
     
       printf("enter the size of array");
       scanf("%d",&n);
       
       printf("enter the array elements");
       for(i=0;i<n;i++)
          { scanf("%d",&a[i]);
		  }
		  
	   printf("enter the array elements");
       for(i=0;i<n;i++)
          { printf("%d",a[i]);
		  }
	  
	    printf("enter the search element");
	    scanf("%d",&key);	  
	  
	    l=0;
	    h=n-1;
	    m=(l+h)/2;
	    
	    mid(l,h,m,key,n,a);

	 }
	 
mid(int l,int h,int m,int key,int n,int a[20])
    { if(l>=h)
	    { printf("element not found");
	      exit(0);
		} 
	
	
	  if(a[m]==key)
        { printf("element found on position %d",m+1);
        }
		
	  else if(a[m]<key)
	          { fun1(l,m,h,key,n,a);
	            
			  }
			  
	  else if(a[m]>key)
	         { fun2(l,m,h,key,n,a);
	       
		     }
		     

	}

fun1(int l,int m,int h, int key,int n,int a[20])
     { l=m+1;
       h=n-1;
       m=(l+h)/2;
       mid(l,h,m,key,n,a);
	 }
	 
fun2(int l,int m,int h,int key,int n,int a[20])
     { l=0;
       h=m-1;
       m=(l+h)/2;
       mid(l,h,m,key,n,a);
	 }
