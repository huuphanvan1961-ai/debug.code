#include <iostream>
using namespace std;
void selectionsort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap(arr[i], arr[min_idx]);
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;
	}
	
	
}
int main() {
		int arr[] = { 64, 25, 12, 22, 11 };
		selectionsort(arr, 5);
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
	}
