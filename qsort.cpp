//Javier Gonzalez
//January 18, 2017
//QuickSort algorithm implementation



void quickSort(int [] arr, int l, int r){

	if (l<h){	//if array size is greater than one element

		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);


	}



}

int partition(int [] arr, int l, int r){

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

