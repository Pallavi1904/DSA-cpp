#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* Next;
};
void ListTraversal(struct Node* ptr){
	while(ptr!=NULL){
	printf("Data is %d \n",ptr->data);
	ptr=ptr->Next;
}}

//************ Insert at first node**********************
struct  Node * insertAtFirst(struct Node*head,int data){ //pointer function
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node)); //another node which indeded to insert(ptr)
	ptr->Next=head; //pointing pointer of ptr to head
	ptr->data=data; //putting new data in ptr
	return ptr;
}

//**********Insert at index**************************
struct Node * insertAtIndex(struct Node*head,int data,int index){
	struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
	
	struct Node * p =head;
	int i =0;
	while(i!=index-1){ // try and understand this loop
		p=p->Next;
		i++;
	}
	ptr->Next=p->Next;//next of ptr become next of p
	p->Next=ptr; // and next of ptr is p
	ptr->data=data;
	return head;	
}

//*************Insert at end*******************
struct Node* insertAtEnd(struct Node* head,int data){
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));

	struct Node* p=head;
	while(p->Next!=NULL){  // New form of loop without i
		p=p->Next;
	
	}

	ptr->Next=NULL;
	p->Next=ptr;
	ptr->data=data;
	return head;
	
}

//*************Insert after node*******************
struct Node* insertAfter(struct Node* head, struct Node*previNode, int data){
 struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
 ptr->data=data;
 ptr->Next=previNode->Next;
 previNode->Next=ptr;
 
 return head;
 
 	
}


int main(){
struct Node* head;
struct Node* second;
struct Node* third;

head =(struct Node*)malloc(sizeof(struct Node)); //allocated memory in heap by this
second =(struct Node*)malloc(sizeof(struct Node));
third =(struct Node*)malloc(sizeof(struct Node));

head->data=7;
head->Next=second; //link first and second node

second->data=8;
second->Next=third;

third->data=11;
third->Next=NULL; //We can add more node by just pointing it

ListTraversal(head);
head = insertAtFirst(head,10);
printf("******************************************\n");

ListTraversal(head);
printf("******************************************\n");

insertAtIndex(head,45,2);
ListTraversal(head);
printf("******************************************\n");

head = insertAtEnd(head,111);
ListTraversal(head);
printf("******************************************\n");

head = insertAfter(head,second,23); // o/p is like we need to comment above functions
ListTraversal(head);


	
	return 0;
}
