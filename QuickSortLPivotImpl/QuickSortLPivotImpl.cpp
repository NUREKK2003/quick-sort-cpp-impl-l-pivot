#include <iostream>
#include <algorithm>
using namespace std;

int Partition(int arr[], int l, int r) {
	int pivot = arr[l];
	while (true)
	{
		while (arr[l] < pivot) {
			l++;
		}
		while (arr[r] > pivot)
		{
			r--;
		}
		if (l < r) {
			std::swap(arr[l], arr[r]);
		}
		else {
			return r;
		}
		l++;
		r--;
	}

}

void QuickSort(int arr[], int l, int r) {
	if (l < r) {
		int q = Partition(arr, l, r);
		QuickSort(arr, l, q);
		QuickSort(arr, q + 1, r);
	}
}

void PrintArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int tab[] = { 8,7,6,345,4,3,2,1 };
	PrintArr(tab, 8);
	QuickSort(tab, 0, 7);
	PrintArr(tab, 8);
	return 0;
}
