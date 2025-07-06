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
	return 0;
}
