#include <stdio.h>
#include <stdlib.h>
struct queue{
	int size;
	int r;  //rear pointer
	int f;  //front pointer
	int* arr;
};
int isEmpty(struct queue* q){
	if(q->f==q->r){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(struct queue* q){
	if(q->r==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(struct queue* q, int val){
	if(isFull(q)){
		printf("Queue overflow");
	}
	else{
		q->r++;
		q->arr[q->r]=val;
	}
}
int dequeue(struct queue* q){
	  int a=-1;
	if(isEmpty(q)){
		printf("Queue underflow");
	}
	else{
		q->f++;
		a=q->arr[q->r];
		}
	return a;
}
void travel(struct queue* q){
	for(int i =0;i<q->size-1;i++){
		printf("elements are %d: \n",q->arr[i]);
			}
}
int main(){
	struct queue* q;
	q->size=10;
	q->f = q->r = -1;
	q->arr=(int*)malloc(q->size * sizeof(int));
	
	enqueue(q,10);
     enqueue(q,11);
	 enqueue(q,12);
	 enqueue(q,13);	
	 travel(q);
	 
	 dequeue(q);
	 travel(q);
	 
	return 0;
}
