#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node * next ;
};

void print_ele(struct Node * ptr){
	while (ptr){
		printf("Element: %d \n",ptr->data);
		ptr=ptr->next;
	}
}

void main (){
	struct Node *head ;
	struct Node *second ;
	struct Node *third ;
	
	head =(struct Node *)malloc(sizeof(struct Node ));	
	second =(struct Node *)malloc(sizeof(struct Node));
	third= (struct Node *)malloc(sizeof(struct Node));
	
	head->data=7;
	head->next =second;
	
	second->data=8;
	second->next=third;
	
	third->data=9;
	third->next= 0;
	 
	 print_ele(head);
}
