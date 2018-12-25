#include<stdio.h>
main()
    { int a[20],i,j,k,temp,n;
       
      printf("enter the number of elements");
      scanf("%d",&n);
      
      printf("enter the elements");
      for(i=0;i<n;i++)
         { scanf("%d",&a[i]);
		 }
		 
	  printf("array before the sorting");
	  for(i=0;i<n;i++)
         { printf("%d",a[i]);
		 }
		 
      for(i=1;i<=n-1;i++)
         { for(j=0;j<=n-1-i;j++)
              { if(a[j]>a[j+1])
                  { temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
				  }
			  }
			  
			printf("after %d iterations",i+1);
			for(k=0;k<n;k++)
			   { printf("%d",a[k]);
			     printf("\n\n");
			   }
		 }
	
	}
