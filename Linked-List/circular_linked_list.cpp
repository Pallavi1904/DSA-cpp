#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* Next;
};
void traversalList(struct Node* head){
	struct Node* ptr=head;
	do{
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->Next;
	}while(ptr!=head);
}
struct Node* insertAtHead(struct Node* head, int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head->Next;
	ptr->data=data;
	while(p->Next!=head){
		p=p->Next;
	}
	//At this point p points to last node of circular list
	p->Next=ptr;
	ptr->Next=head;
	head=ptr;
	
	
	return head;
}

int main(){
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
				
	head->data=4;
	head->Next=second;
	
	second->data=3;
	second->Next=third;
	
	third->data=6;
	third->Next=fourth;
	
	fourth->data=1;
	fourth->Next=head; //circular nodes
	
traversalList(head);
head=insertAtHead(head,80);	
head=insertAtHead(head,90);	
printf("Circular list after insertion:\n");			
traversalList(head);	
	return 0;
}
