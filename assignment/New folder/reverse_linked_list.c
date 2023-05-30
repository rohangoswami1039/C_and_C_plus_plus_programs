#include <stdio.h>
#include <stdlib.h>

struct node{
	int data ;
	struct node * next  ;
};
void print_ele(struct Node * ptr){
	printf("\n");
	while (ptr){
		printf("Element: %d \n",ptr->data);
		ptr=ptr->next;
	}
}
void main{
		int length, i ;
	
	//initalizing the length of the linked list 
	
	printf("Enter the length of list :");
	scanf("%d",&length);
	
	//declearing the pointers as a node(structure )
	struct Node *head,*current,*temp;

	
	for(i=0;i<length;i++){
		current=(struct Node *)malloc(sizeof(struct Node ));

		printf("Enter the element %d: ",(i + 1));
		scanf("%d",&current->data);
		
		// if the i=
		if(i==0){
			head=temp=current;
		}
		else {
			temp->next=current;
			temp=current;
		}
	}
	temp->next=NULL;
	temp=head;
	
	struct node * p=head ;
	struct node * q= null ;
	struct node * r ;
	while (p!=null)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	prinr_ele(head);
}
