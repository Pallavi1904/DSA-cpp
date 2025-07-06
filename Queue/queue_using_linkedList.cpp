#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* f = NULL; //f & r of queue is null initially thus
struct Node* r = NULL; // f & r are global variables

void Traversal(struct Node* ptr){
	while(ptr != NULL){
		printf("Element is: %d\n",ptr->data);
		ptr= ptr->next;
	}
}
void enqueue(int val){
  struct Node* n =(struct Node*)malloc(sizeof(struct Node));
  if(n==NULL){ //full condition
  	printf("Queue Overflow");
  }	
  else{
  	n->next=NULL;
  	n->data=val;
  	if(f==NULL){
  		f=r=n;
	  }
	  else{
	  	r->next=n;
	  	r=n;
	  }
  }
}
int dequeue(){
	int a=-1;
	struct Node* ptr=f;
	if(f==NULL){ // empty condition
		printf("Queue Underflow");
	}
	else{
		f = f->next;
		a = ptr->data;
		free(ptr);
		}
	return a;
}
int main(){
	enqueue(10);
	enqueue(17); // f & r globally available
	Traversal(f);
	dequeue();
    Traversal(f);
	
	
	
	
	
	
	return 0;
}
