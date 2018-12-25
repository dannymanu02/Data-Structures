#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char txt[100];
char pat[100];

main(){
	int m,n;
	printf("enter the text");
	gets(txt);
	printf("enter the pattern");
	gets(pat);
	m = strlen(txt);
	n = strlen(pat);
	kmp(m,n);
}

kmp(int m, int n){
	int i=0, j=0;
	int f[n];
	cf(f,n);
	
	while(i<m){
		if(pat[j]==txt[i]){
			i++;
			j++;
		}
		if(j==n){
			printf("found at %d",i-j);
			j = f[j-1];
		}
		else if(pat[j]!=txt[i]){
			if(j!=0)
      			j= f[j-1];
      	    else
      	        i++;
		}
	}
}

cf(int f[],int n){
	f[0]=0;
	int i=0,j=1;
	
	while(j<n){
		if(pat[j]==pat[i]){
			i++;
			f[j]=i;
			j++;
		}
		
		else{
			if(i!=0){
				i = f[i-1];
			}
			else{
				f[i]=0;
				j++;
			}
		}
		   
		
	}
}


