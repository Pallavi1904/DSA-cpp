#include <stdio.h>
#include <stdlib.h>
struct stack{
	int size;
	int top;
	int* arr;
};
int isEmpty(struct stack* ptr){
	if(ptr->top == -1){
		return 1;
			}
	else{
		return 0;
	}
}
int isFull(struct stack* ptr){
	if(ptr->top == ptr->size-1){
		return 1;
			}
	else{
		return 0;
	}
}
int main(){
  /*	struct stack s;
	s.size=80;
	s.top= -1;  //empty stack
	s.arr = (int*)malloc(s.size * sizeof(int));
	*/
	
	// We can also... by making pointer of stack pointer: 
	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
	s->size=6;
	s->top= -1;  //empty stack
	s->arr = (int*)malloc(s->size * sizeof(int));
	
	//Push one element manually
	s->arr[0]=4;
	s->top++;
	
	//Cheak if stack is empty
	if(isEmpty(s)){
		printf("Stack is Empty");
	}
	else{
		printf("Stack is not Empty");
	}
	
	return 0;
}
