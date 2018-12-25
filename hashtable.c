#include<stdio.h>
#include<stdlib.h>

int hashvalue(int);

int h[10];
main(){
	int ch,i;
	for(i = 0;i<10;i++){
		h[i]=-1;
	}
	while(1){
		printf("1.insert\n2.deletion\n3.search\n4.display\n5.exit\nEnter your choice\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : insert();
			         break;
		 
		    //case 2 : delete();
		      //       break;
		             
		    case 3 : search();
		             break;
		             
		    case 4 : display();
		             break;
		             
		    case 5 : exit(0);
		    
		    default : ;
		    
		}
	}
}

int hashvalue(int v){
	return v%10;
}

insert(){
	int flag=0,i,val,key;
	printf("enter the value");
	scanf("%d",&val);
	key = hashvalue(val);
	
	if(h[key]==-1){
		h[key] = val;
		flag = 1;
	}
	else{
		for(i=key+1;i<10;i++){
			if(h[i]==-1){
				h[i] = val;
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			for(i=0;i<key;i++){
				h[i]=val;
				flag = 1;
				break;
			}
		}
	}
}

search(){
	int flag,val,key,i,found;
	printf("enter the search key");
	scanf("%d",&key);
	val = hashvalue(key);
	if(h[val]==key){
		found = 1;
		flag = 1;
	}
	
	else{
		for(i=val;i<0;i++){
			if(h[i]==key){
				flag = 1;
				found = 1;
				break;
			}
		}
		if(flag == 0){
			for(i=0;i<key;i++){
				if(key == h[i]){
					found =1;
					flag =1;
					break;
				}
			}			
		}
	}
	
	if(found == 1)
	   printf("the value %d is found",key);
	else
	   printf("value not found");
}

display(){
	int i;
	for(i=0;i<10;i++){
		if(h[i]!=-1)
		   printf("%d",h[i]);
	}
}
