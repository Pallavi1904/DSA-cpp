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
int match(char a, char b){
	if(a=='(' && b==')'){
		return 1;
	}
	if(a=='{' && b=='}'){
		return 1;
	}
	if(a=='[' && b==']'){
		return 1;
	}
	return 0;
}
int parenthesis_match(char* exp){
     struct stack* sp;
     sp->size=20;
      sp->top=-1;
      sp->arr=(char*)malloc(sp->size * sizeof(char));
       char popped_char;
      
      for(int i=0;exp[i]=!'\0';i++){
      	
      	   if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
      	   	push(sp,exp[i]);
			 }
			else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
		        	popped_char=pop(sp);
		        	if(!match(popped_char,exp[i])){
		        		return 0;
					}
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
  char* exp ="{[2*(10-5)]+(8-9)}";
  if(parenthesis_match(exp)){
  	printf("parenthesis is balanced");
  }
  else{
  	("parenthesis is not balanced");}  
  
return 0;
}
