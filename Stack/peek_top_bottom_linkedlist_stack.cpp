#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
 struct Node* top = NULL; //global variable

void display(struct Node* ptr){
	while(ptr!=NULL){
		printf("Element is: %d\n",ptr->data);
		ptr= ptr->next;
	}
}
int isEmpty(struct Node* top){
	if(top == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct Node* top){
	struct Node* p =(struct Node*)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
struct Node* push(struct Node* top, int x){
	if(isFull(top)){
		printf("Stak Overflow!\n");
	}
	else{
		struct Node* n = (struct Node*)malloc(sizeof(struct Node));
		n->data=x;
		n->next=top;
		top=n;
	}
}
int pop(struct Node* tp){
	if(isEmpty(tp)){
		printf("Stak Underflow!");
		}
		else{
		  	struct Node* n=top;
			top = tp->next;  // top bcoz when we change it should be in our global variable not in local tp var.
			int x=n->data;
			free(n);
			return x;
		}
}
int peek(int position){
	struct Node* ptr=top;
	for(int i=0;(i<position-1 && ptr!=NULL);i++){
		ptr=ptr->next;
	}
	if(ptr!=NULL){
		return ptr->data;
	}
	else{
		return -1;
	}
}
int stack_Top(){
	return top->data;
}
//int stack_Bottom(){
//	struct Node* ptr=top;
//	for(int i=1;i<=4;i++){
//		printf("no");
//	}
//	if(ptr==NULL){
//		return ptr->data;
//	}   Do for bottom
//}

int main(){
	// Push Emplementation
	
	 top = push(top, 28);
	  top = push(top, 18);
	   top = push(top, 15);
	    top = push(top, 7);
	    
	    
	   for(int i=1;i<=4;i++){
	   	printf("Value at position %d is: %d\n",i,peek(i));
		   	   }
	    
	    printf("Value at top is: %d\n",stack_Top());
           printf("Value at bottom is : %d\n",stack_Bottom());
     
return 0;
}
