#include <stdio.h>
#include <stdlib.h>
struct stack{
	int size;
	int top;
	int* arr;
};

int isFull(struct stack *ptr){
	if(ptr->top == ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
	
}

int isEmpty(struct stack *ptr){
		if(ptr->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
void push( struct stack * ptr, int value){
	if(isFull(ptr)){
		printf("Stack is full and can't push %d to stack", value);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] = value;
	}
}
int pop(struct stack * ptr){
	int num;
	if(isEmpty(ptr)){
		printf("Stack is empty/n");
		}
	else{
		 num = ptr->arr[ptr->top];
		 ptr->top = ptr->top-1;  //ptr->top--;
		 return num;
	}
}
int stackTop(struct stack* sp){
	return sp->arr[sp->top];
}
int stackBottom(struct stack* sp){
	return sp->arr[0];
}

int main(){
  
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); //struct instance of stack pointer
  sp->size=10;
  sp->top= -1;
  sp->arr =(int*)malloc(sp->size* sizeof(int));
  
  push(sp, 1);
  push(sp, 2);
  push(sp, 3);
  push(sp, 4);
  push(sp, 5);
  push(sp, 6);
  push(sp, 7);
  push(sp, 8);
  push(sp, 9);
  push(sp, 10);
 
  
  printf("The top most value of sp is %d \n",stackTop(sp));
   printf("The bottom most value  of sp is %d ",stackBottom(sp));
  
   
 return 0;
}
