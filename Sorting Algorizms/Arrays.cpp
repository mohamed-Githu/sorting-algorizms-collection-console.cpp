#include <iostream>

using namespace std;

void linea() { cout << "\n\n----------------------------------------------\n\n"; }

void get(int arr[], int count)
{
	for (int x = 0; x < count; x++)
	{
		cout << x + 1 << " - ";
		cin >> arr[x];
	}
}

void print(int arr[], int count)
{
	for (int x = 0; x < count; x++)
		cout << " " << x + 1 << " : " << arr[x] << endl;
	linea();
}