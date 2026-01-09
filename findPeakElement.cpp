#include<bits/stdc++.h>
using namespace std;
// Find the peak element means the element which is greater than the left and right element
int peak(vector<int>&arr){
    int n=arr.size();
    int low=1;
    int high=n-1;
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    while(low<=high){
        int mid=(low+high)/2;
        

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        // mid is on the Increasing curve
        else if(arr[mid]>arr[mid-1] && arr[mid+1]>arr[mid]){
            low=mid+1;
        }
        //mid is on the Decreasing curve
        else {
            high=mid-1;
        }
        
    }
    return -1;
}

int main(){
vector<int>arr={1,5,1,2,1};
cout<<peak(arr);
}