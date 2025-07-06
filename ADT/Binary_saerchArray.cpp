
#include <stdio.h>
int binarySearch(int arr[],int size,int element){
	int low,mid,high;
	low=0;
	high=size-1;
	//start searching
	while(low<=high){
	
	mid=(low+high)/2;
	if(arr[mid]==element){
		return mid;
	}
	if(arr[mid]<element){  //cheak out nootebook to understand logic
		low=mid+1;
	}
	else{
		high=mid-1;
	}
	//search end
}
return -1;  // element not found
}


int main(){
	int arr[]={10,12,34,43,55,111,189};	
	int size=sizeof(arr)/sizeof(int);
	int element = 189;
	int binary = binarySearch(arr,size,element);
	printf("The element at %d was found at %d ",element,binary);
		
	return 0;
}
