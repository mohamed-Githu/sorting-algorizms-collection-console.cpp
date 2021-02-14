#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	short unsigned int size;
	int arr[100];

	cout << "Size = ";
	cin >> size;

	cout << "\n";
	get(arr, size);
	
	cout << "\n\n Selection sort :\n\n";
	SelectionSortCall(arr, size);
	print(arr, size);
	
	cout << "\n\n Bubble sort :\n\n";
	BubbleSortCall(arr, size);
	print(arr, size);

	cout << "\n\n Merge Sort :\n\n";
	MergeSortCall(arr, size);
	print(arr, size);

	cout << "\n\n Quick sort :\n\n";
	QuickSortCall(arr, size);
	print(arr, size);
}