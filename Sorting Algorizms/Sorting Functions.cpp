#include <iostream>

void SelectionSortCall(int arr[], int count)
{
	for (int x = 0; x < count - 1; x++)
	{
		bool switched = false;
		for (int wall = x; wall < count; wall++)
		{
			if (arr[wall] < arr[x])
			{
				int temp = arr[wall];
				arr[wall] = arr[x];
				arr[x] = temp;
				switched = true;
			}
		}
		if (!switched)
			return;
	}
}

void BubbleSortCall(int arr[], int count)
{
	for (int x = 0; x < count - 1; x++)
	{
		for (int wall = 0; wall < count; wall++)
		{
			if (arr[wall] > arr[x])
			{
				int temp = arr[wall];
				arr[wall] = arr[x];
				arr[x] = temp;
			}
		}
	}
}

static void merge(int arr[], int from, int middle, int to)
{
	int temp[100];
	int RP = from; //Right pointer
	int LP = middle + 1; //Left Pointer
	int index = from;

	for (; RP < middle + 1 && LP < to + 1;)
	{
		if (arr[RP] < arr[LP])
		{
			temp[index] = arr[RP];
			RP++;
			index++;
		}
		else
		{
			temp[index] = arr[LP];
			LP++;
			index++;
		}
	}
	for (; RP < middle + 1;)
	{
		temp[index] = arr[RP];
		RP++;
		index++;
	}
	for (; LP < to + 1;)
	{
		temp[index] = arr[LP];
		LP++;
		index++;
	}
	for (int x = from; x < to + 1; x++)
		arr[x] = temp[x];
}

static void split(int arr[], int from, int to)
{
	if (from < to)
	{
		int middle = (from + to) / 2;
		split(arr, from, middle);
		split(arr, middle + 1, to);
		merge(arr, from, middle, to);
	}
}

void MergeSortCall(int arr[], int size)
{
	split(arr, 0, size - 1);
}

static int sort(int arr[], int from, int to)
{
	int pivot = arr[to];
	int wall = from;

	for (int x = from; x < to; x++)
	{
		if (arr[x] <= pivot)
		{
			int temp = arr[wall];
			arr[wall] = arr[x];
			arr[x] = temp;
			wall++;
		}
	}

	arr[to] = arr[wall];
	arr[wall] = pivot;

	return wall;
}

static void quicksort(int arr[], int from, int to)
{
	if (from < to)
	{
		int pivot = sort(arr, from, to);
		quicksort(arr, from, pivot - 1);
		quicksort(arr, pivot + 1, to);
	}
}

void QuickSortCall(int arr[], int size)
{
	quicksort(arr, 0, size - 1);
}