#include<bits/stdc++.h>
using namespace std;

// Left rotate an array by one place

int main(){
    vector<int>arr={1,2,3,4,5};
    int temp=arr[0];
    int n=arr.size();
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}