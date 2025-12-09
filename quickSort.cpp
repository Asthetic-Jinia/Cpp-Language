#include <bits/stdc++.h>
using namespace std;

// Function to partition the array
int partitionArray(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1; // pivot index
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partitionArray(arr, low, high);
        quickSort(arr, low, pIndex - 1);   // sort left part
        quickSort(arr, pIndex + 1, high);  // sort right part
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    quickSort(arr, 0, arr.size() - 1);

    for(int x : arr)
        cout << x << " ";
    return 0;
}
