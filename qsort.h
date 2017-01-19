//Javier Gonzalez
//Jan 18, 2016
//Quciksort class definition

#ifndef QSORT_H
#define QSORT_H

class QSort{

private:
	int size;	//size of array

	int partition(int [] , int, int);
	void quickSort(int [] , int, int);
	void swap(int &, int &);

public:
	QSort(){ }	//default constructor
	QSort(int [], int );
	void sort(int [], int );
};

#endif