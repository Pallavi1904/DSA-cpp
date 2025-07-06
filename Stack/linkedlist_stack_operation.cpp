#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
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
int pop(struct Node** top){
	if(isEmpty(*top)){
		printf("Stak Underflow!");
		}
		else{
			struct Node* n=*top;
			*top = (*top)->next;
			int x=n->data;
			free(n);
			return x;
		}
}

int main(){
	// Push Emplementation
	 struct Node* top = NULL;
	 top = push(top, 28);
	  top = push(top, 18);
	   top = push(top, 15);
	    top = push(top, 7);
	    
	    display(top);
	    
     // Pop Emplementation
     
     int element = pop(&top);
     printf("Poped element is: %d\n",element);
      display(top);
     
     
     // (*******************  IMP ****************)
    // To not use of this & and pointer to pointer in pop operation another solution is to make
    // top a global variable as it will change automatically whenever updated
	 
	  
	 
	 
	 
	 
	 
	  

	
	
	
	return 0;
}
