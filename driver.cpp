


#include "qsort.h"
#include <stdlib.h>
#include <iostream>


using namespace std;
void runTest(int);	//will run quicksort function against different inputs


int main(){

	srand(time(NULL));	//seed randomizer

	runTest(10);		//run 10 tests


	return 0;

}

void runTest(int n_tests){

	for (int t=0; t<n_tests; t++){

		
		int size=rand()%20;
		double arr[size];

		for (int i=0; i<size; i++)		//populate array with random numbers
			arr[i]=(rand()%10000)*1.1;

		cout<<"unsorted: ";
		for (int i=0; i<size; i++)		//display unsorted array
			cout<<arr[i]<<" ";
		cout<<endl;


		QSort<double> newSort;
		newSort.sort(arr,size);		//call sorting function


		cout<<"sorted: ";
		for (int i=0; i<size; i++)		//display sorted array
			cout<<arr[i]<<" ";
		cout<<endl;

	}
}