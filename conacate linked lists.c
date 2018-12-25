#include<stdio.h>
#include<stdlib.h>

struct node
           { int data;
             struct node* next;
		   };
		   
struct node* start, *head1, *head2;
int n;

struct node* getnode();
struct node* createlist();
void display(struct node* );

void main()
         { int i;
           
           for(i=1;i<3;i++)
              { switch(i)
                       { case 1 : head1 = createlist();
                                  break;
                                  
                         case 2 : start = NULL;
						          head2 = createlist();
                                  break;
                                  
                         default : printf("wrong algorithm\n");
					   }
			  }
			  
			concate();
		 }
		 
struct node* getnode()
                     { struct node* newnode = (struct node*)malloc(sizeof(struct node));
                     
                       printf("enter the data of the node\n");
                       scanf("%d",&newnode->data);
                       newnode->next = NULL;
                       
                       return newnode;
					 }
					 
struct node* createlist()
           { struct node* newnode;
             int i;
		     printf("enter the size of list\n");
             scanf("%d",&n);
            
			for(i=1;i<=n;i++)
			    { newnode = getnode(); 
				if(start == NULL)
               { start = newnode;
			   }
			   
			 else
			     { struct node* temp;
			       temp= start;
			       
			       while(temp->next!=NULL)
			            { temp=temp->next;
						}
						
					temp->next=newnode;
					
				 }
			}
			
		    return start;
			}
			
concate()
        { if(head1 == NULL)
            { display(head2);
			}
			
		  else if(head2 == NULL)
		         { display(head1);
				 }
				 
		  else
		      { struct node* trav, *tran, *last;
			    
				trav=head1;
				tran=head2;
				
				while(tran!=NULL)
				      { while(trav->next!=NULL)
				             { trav=trav->next;
							 }
						last=(struct node*)malloc(sizeof(struct node));
						last->data=tran->data;
						last->next=NULL;
						trav->next=last;
						
						tran=tran->next;
				        }
						
				display(head1); 
			  }
			  
			
		}
		
	void display(struct node* p)
	       { struct node*temp = p;
	         while(temp!=NULL)
	               { printf("%d->", temp->data);
	                 temp=temp->next;
				   }
				   
			 printf("\n");
		   }
