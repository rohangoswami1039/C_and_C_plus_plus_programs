//Doubly linked list 
#include<stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data ;
	struct node *next;
};
struct node *head ;


void insertion_beginning()
{
	struct node *ptr ;
	int item ;
	ptr=(struct node *)malloc(sizeof(struct node));
	if (ptr==NULL)
	{
		printf("\n overflow ");
	}
	else 
	{
		printf("\n Enter the value: ");
		scanf("%d",&item);
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			ptr->data=item;
			head=ptr;
		}
		else 
		{
			ptr->data=item;
			ptr->prev=NULL;
			ptr->next=head;
			head->prev=ptr;
		}
		printf("Node Insterted");
	}
}

void instertion_last(){
	struct node *ptr,*temp;
	int item ;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL){
		printf("\n overflow");
	}
	else {
		print("\n Enter the value: ");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL){
			ptr->next=NULL;
			ptr->prev=NULL;
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->prev=temp;
			ptr->next=NULL;
		}
	}
	printf("\n node inserted ");
	
}

void print_ele(struct Node * ptr){
	printf("\n");
	while (ptr){
		printf("Element: %d \n",ptr->data);
		ptr=ptr->next;
	}
}
void main {
	
	int ch;
	printf("1. Enter the node at start \n ");
	printf("2. Enter the node at last \n")
	printf("3. Print the linked list \n")
	printf("Enter the choice: ")
	scanf("%d",&ch);
	if(ch==1){
		insertion_beginning();
	}
	else if (ch==2){
		instertion_last();
	}
	else if(ch==3){
		print_ele(head);
	}
	else {
		printf("Invalid choice: ")
	}
	
}
