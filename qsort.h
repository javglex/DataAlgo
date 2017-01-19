//Javier Gonzalez
//Jan 18, 2016
//Quciksort class definition

#ifndef QSORT_H
#define QSORT_H

QSort{

private:
	int size;	//size of array

	int partition(int [] , int, int);
	void quickSort(int [] , int, int);
	void swap(int &, int &);

public:
	QSort();	//default constructor
	QSort(int [] arr, n);
	sort(int [] arr, int n);
};

#endif