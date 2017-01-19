//Javier Gonzalez
//January 18, 2017
//QuickSort algorithm class implementation

#include "qsort.h"


void QSort::QSort(int [] arr, n){
	size=n;
	quickSort(arr,0,size);
}


void QSort::sort(int [] arr, int n){ 
	size=n;
	quickSort(arr,0,size);
}


void QSort::quickSort(int [] arr, int l, int r){

	if (l<h){	//if array size is greater than one element

		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);


	}



}

int QSort::partition(int [] arr, int l, int r){

	int pivot=arr[r];

	if (l<=r){

		while(arr[pivot]<l)
			l++;
		while (arr[pivot]>r && (l<=r))
			r--;
		swap(arr[l],arr[r]);

	}

	return l;
}

void QSort::swap(int & a, int & b){

	int temp=a;
	a=b;
	b=temp;

}