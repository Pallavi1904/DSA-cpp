#include <stdio.h>
#include <stdlib.h>

struct stack{
	int size;
	int top;
	char* arr;
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
void push( struct stack * ptr, char value){
	if(isFull(ptr)){
		printf("Stack is full and can't push %d to stack", value);
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] = value;
	}
}
char pop(struct stack * ptr){
	char num;
	if(isEmpty(ptr)){
		printf("Stack is empty/n");
		}
	else{
		 num = ptr->arr[ptr->top];
		 ptr->top = ptr->top-1;  
		 return num;
	}
}
void show(struct stack* p){
	for(int i=0;i<p->size;i++){
		printf("%d ",p->arr[i]);
	}
}
int parenthesis_match(char* exp){
     struct stack* sp;
     sp->size=20;
      sp->top=-1;
      sp->arr=(char*)malloc(sp->size * sizeof(char));
      
	  for(int i=0;exp[i]=!'\0';i++){
      	
      	   if(exp[i]=='('){
      	   	push(sp,'(');
			 }
			else if(exp[i]==')'){
				if(isEmpty(sp)){
					return 0;
				}
				pop(sp);
			}
			if(isEmpty(sp)){
				return 1;
			}
			else{
				return 0;
			}
	  }
}
int main(){
  char* exp ="8-(9)";
  if(parenthesis_match(exp)){
  	printf("parenthesis matching");
  }
  else{
  	("parenthesis is not matching");}  
  
return 0;
}
