#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* Next;
};
//Traversal
void ListTraversal(struct Node* ptr){
	while(ptr!=NULL){
	printf("Data is %d \n",ptr->data);
	ptr=ptr->Next;
}}
//Delete the first node
struct Node* deleteFirst(struct Node* head){
	struct Node* ptr=head;
	head=head->Next;
	free(ptr);
	return head;
}
//delete at index
struct Node* deleteAtIndex(struct Node* head,int index){
	struct Node* p =head;
	struct Node* q = head->Next;
	for(int i=0;i<index-1;i++){
		p=p->Next;
		q=q->Next;
	}
	p->Next=q->Next;
	free(q);
		return head;
	}
	
//Delete last node
struct Node* deleteLast(struct Node*head){
	struct Node* p=head;
	struct Node* q=head->Next;
	while(q->Next!=NULL){
		p=p->Next;
		q=q->Next;
	}
	p->Next=NULL;
	free(q);
	return head;
}
//delete node with given value
struct Node* deleteAtValue(struct Node* head,int value){
	struct Node* p=head;
	struct Node* q=head->Next;
	while(q->data!=value && q->Next!=NULL){ //second cond. of null for as value is not present at list then
		p=p->Next;
		q=q->Next;
	}
	if(q->data == value){
	p->Next=q->Next;
	free(q);	
	}
	else{
		printf("Value %d is not present in list \n",value);
	}
	return head;
}
int main(){
struct Node* head;
struct Node* second;
struct Node* third;
struct Node* fourth;

head =(struct Node*)malloc(sizeof(struct Node)); //allocated memory in heap by this
second =(struct Node*)malloc(sizeof(struct Node));
third =(struct Node*)malloc(sizeof(struct Node));
fourth =(struct Node*)malloc(sizeof(struct Node));

head->data=4;
head->Next=second; //link first and second node

second->data=3;
second->Next=third;

third->data=8;
third->Next=fourth; //We can add more node by just pointing here

fourth->data=1;
fourth->Next=NULL; 

printf("Linked-list before deletion\n");
ListTraversal(head);
/*
printf("Linked-list after head deletion\n");	
head=deleteFirst(head);
ListTraversal(head);    
 */
 /*
 printf("Linked-list after deleting at index \n");
 head= deleteAtIndex(head,2);
ListTraversal(head);
*/
/*
 printf("Linked-list after deleting at end \n");
 head= deleteLast(head);
ListTraversal(head);
*/
printf("Linked-list after deleting at given value \n");
 head= deleteAtValue(head,10);
ListTraversal(head);

	return 0;
}
