#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];      // element to be inserted
        int j = i - 1;

        // Shift elements that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};

    insertionSort(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
