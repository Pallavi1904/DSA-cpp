#include <stdio.h>
int LinearSearch(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(arr[i]== element){
			return i;
	
		}
		//size = used_size and element = element to be searched
		
	}
	return -1;
}
int main(){
	int arr[]={10,12,34,4,5,11,89};
	int element=4;
	int size= sizeof(arr)/sizeof(int);
	int search = LinearSearch(arr,size,element);
	printf("The element at %d was found at %d ",element, LinearSearch);
	return 0;
}
//There is bug in code find it after
