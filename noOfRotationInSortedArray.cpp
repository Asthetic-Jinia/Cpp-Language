#include<bits/stdc++.h>
using namespace std;

int noOfRotation(vector<int>&arr){
    int n=arr.size();
    int low=0,high=n-1;
    int mini=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        //search space already sorted
        // then always arr[low] will be the minimum element
        //Inthat search space
        if(arr[low]<=arr[high]){
            mini=min(mini,arr[low]);
            break;
        }
        // left half sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<mini){
                mini=arr[low];
                index=low;
            }
            
            low=mid+1;
        }
        // right half sorted
        else{
            if(arr[mid]<mini){
                index=mid;
                mini=arr[mid];
            }
            high = mid - 1;

        }
    }
    return index;
}

int main(){
    vector<int>arr={4,5,1,2,3};
    
    cout<<noOfRotation(arr);
    return 0;
}