#include <stdio.h>
#include <stdlib.h>  //used for malloc

// myArray is to initialization it doesnt provide dyanamic memory
struct myArray{
		int total_size;
		int used_size;
		int *ptr; // to point first element adress
		 };	

// This is for actually creation of dynamic memory		 
void createArray(struct myArray* a, int tsize, int usize){
	/*	(*a).total_size=tsize;
		(*a).used_size=usize;
		(*a).ptr=(int *)malloc(tsize*sizeof(int)); */
		
		a->total_size=tsize;
		a->used_size=usize;
		a->ptr=(int *)malloc(tsize*sizeof(int));
	}
void show(struct myArray *a){   // it is set element
	for(int i=0; i < a->used_size;i++){
		printf("%d\n",(a->ptr)[i]);
	}
	
}
void setVal(struct myArray *a){ // it is get element
	for(int i=0; i < a->used_size;i++){
		int n ;
		printf("Enter element %d ",i);
		scanf("%d", &n);
		 (a->ptr)[i] = n;
		
	}
	
}

int main(){
	struct myArray marks;
	createArray(&marks, 10, 2);
	printf("We are running setVal now\n");
	setVal(&marks);
	printf("We are running show now\n");
	show(&marks);
	
	
    return 0;
}
