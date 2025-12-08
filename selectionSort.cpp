#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // assume current index has the minimum value

        // find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap arr[i] with arr[minIndex]
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
