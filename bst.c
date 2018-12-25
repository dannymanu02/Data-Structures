#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *rc, *lc;
	int data;
};

/*struct st {
	int data;
	struct st* next;
};*/

struct node* root;
struct node* s[100];

struct node* getnode(int);
void traverse(struct node*); 
main(){
	 int ch,data;
	 
	 while(1){
	 	printf("1.insert\n2.Traverse\nEnter your choice\n");
	 	scanf("%d",&ch);
	 	
	 	switch(ch) {
	 		case 1 : printf("enter the data");
	 		         scanf("%d",&data);
	 		         insert(data);
	 		         break;
	 		         
	 		case 2 : traverse(root);
	 		         break;
	 		         
	 		default : ;
	
		 }
	 }
}

struct node* getnode(int d) {
	struct node *nn = (struct node*)malloc(sizeof(struct node));
	nn->data = d;
	nn->lc = NULL;
	nn->rc = NULL;
	return nn;
}

insert(int d){
	struct node* n,*temp;
	n = getnode(d);
	
	if(root == NULL){
		root = n;
	}
	
	else {
		struct node* curr = root, *p;
		
		while(curr!=NULL){
			p = curr;
			if(curr->data<n->data)
			   curr = curr->rc;
			else
			   curr = curr->lc;
		}
		
		if(n->data>p->data)
		   p->rc = n;
		else
		   p->lc = n;
	}
}

/*traverse() {
	struct node* curr = root;
	bool done = 0;
	int t=0;
	
	while(!done){
		if(curr != NULL){
			s[t] = curr->data;
			curr = curr->lc;
			t++; 
		}
		
		else{
			if(sizeof(s)!=0){
				int i = t;
				printf("%d",&s[--t]);
				struct node* temp = root;
				inorder(struct node*temp){
					if(temp->data == s[t]){
						curr = temp;
					}
				}
				curr = curr->rc;
			}
			else
			  done = 1;
		}
	}
}*/

void traverse(struct node* root){
	/*if(root!=NULL){
	traverse(root->lc);
	printf("%d",root->data);
	traverse(root->rc);*/
	
	int t=0;
	while(root!=NULL){
		s[++t] = root;
		root= root->lc;
	}
	root = s[t--];
	
	while(root!=NULL){
		printf("%d",root->data);
		if(root->rc!=NULL){
			root = root->rc;
			while(root!=NULL){
				s[++t] = root;
				root = root->lc;
			}
			
		}
		
		root = s[t--];
	}
	

}

