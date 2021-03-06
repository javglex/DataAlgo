//Javier Gonzalez
//January 18, 2017
//QuickSort algorithm class implementation

#include "qsort.h"

template <class T>
QSort<T>::QSort(T arr [], int n){
	size=n;
	quickSort(arr,0,size-1);
}

template <class T>
void QSort<T>::sort(T arr[], int n){ 
	size=n;
	quickSort(arr,0,size-1);
}

template <class T>
void QSort<T>::quickSort(T arr[], int l, int r){

	if (l<r){	//if array size is greater than one element

		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);


	}

}

template <class T>
int QSort<T>::partition(T arr[], int low, int high){

	T pivot=arr[low];

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
template <class T>
void QSort<T>::swap(T & a, T & b){

	T temp=a;
	a=b;
	b=temp;

}