#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
	int size;
	int top;
	char* arr;
};
int stackTop(struct stack* sp){
	return sp->arr[sp->top];
}
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
int push( struct stack * ptr, char value){
	if(isFull(ptr)){
    printf("Stack overflow");		
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] = value;
	}
}
char pop(struct stack * ptr){
	char num;
	if(isEmpty(ptr)){
		printf("Stack underflow");
		return -1;
		}
	else{
		 num = ptr->arr[ptr->top];
		 ptr->top = ptr->top-1;  
		 return num;
	}
}
int prece(char ch){
	if(ch=='*' || ch=='/'){
		return 3;
	}
	else if(ch=='+' || ch=='-'){
		return 2;
	}
	else{
		return 0;
	}
}
int isOperator(char ch){
	if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
		return 1;
	}
	else{
		return 0;
	}
}
char* infix_to_postfix(char* infix){
	struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
	sp->size=20;
	sp->top=-1;
	sp->arr=(char*)malloc(sp->size*sizeof(char));
	
	char* postfix=(char*)malloc((strlen(infix)+1) * sizeof(char));
	int i=0; //infix scanner
	int j=0; //postfix filler
	
	while(infix[i]!='\0'){
		if(!isOperator(infix[i])){
			postfix[j] = infix[i];
			i++;
			j++;
			
}

           else{
          	if(prece(infix[i]>stackTop(sp))){
          		push(sp,infix[i]);
          		i++;
			  }
			  else{
			  	postfix[j]=pop(sp);
			  	j++;
			  }		
			    }
	
}
   while(!isEmpty(sp)){
   	postfix[j]==pop(sp);
   	j++;
   }
   postfix[j]='\0';

}


int main(){
	char* infix = "a+b/c";
	printf("The postfix is %s ",infix_to_postfix(infix));
  
return 0;
}
