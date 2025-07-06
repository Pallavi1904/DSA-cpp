#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* Prev;
	struct Node* Next;
};
void traversalList(struct Node* head){
	struct Node* ptr=head;
	do{
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->Next;
	}while(ptr!=head);
}
void reverseTraversalList(struct Node* fourth){
	struct Node* ptr=fourth;
	do{
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->Prev;
	}while(ptr!=fourth);
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
	
	//for head
	head->data=23;
	head->Prev=NULL;
	head->Next=second;
	
	//for second
    second->data=34;
	second->Prev=head;
	second->Next=third;
	
	//for third
	 third->data=56;
	 third->Prev=second;
	 third->Next=fourth;
	 
	 //for fourth
	fourth->data=52;
	fourth->Prev=third;
	fourth->Next=NULL;
	
	//traversalList(head);
	printf("******************************************\n");
	reverseTraversalList(fourth);

	return 0;
}
