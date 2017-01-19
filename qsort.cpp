//Javier Gonzalez
//January 18, 2017
//QuickSort algorithm class implementation

#include "qsort.h"


QSort::QSort(int arr[], int n){
	size=n;
	quickSort(arr,0,size-1);
}


void QSort::sort(int arr[], int n){ 
	size=n;
	quickSort(arr,0,size-1);
}


void QSort::quickSort(int arr[], int l, int r){

	if (l<r){	//if array size is greater than one element

		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);


	}



}

int QSort::partition(int arr[], int low, int high){

	int pivot=arr[low];

	do{

		while((high>low) && arr[high]>=pivot)
			high--;
		if (high==low) break;
		arr[low++]=arr[high];
		while ((low<high)&& arr[low]<=pivot)
			low++;
		if (low==high) break;
		arr[high--]=arr[low];
		

	}while(true);

	arr[low]=pivot;

	return low;
}

void QSort::swap(int & a, int & b){

	int temp=a;
	a=b;
	b=temp;

}