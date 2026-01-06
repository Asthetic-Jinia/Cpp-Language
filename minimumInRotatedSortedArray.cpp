#include<bits/stdc++.h>
using namespace std;

int minimumInRotatedSortedArray(vector<int>&arr){
    int n=arr.size();
    int low=0,high=n-1;
    int mini=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;

        //search space already sorted
        // then always arr[low] will be the minimum element
        //Inthat search space
        if(arr[low]<=arr[high]){
            mini=min(mini,arr[low]);
            break;
        }

        //left half sorted
        if(arr[low]<=arr[mid]){
            mini=min(mini,arr[low]);
            low=mid+1;
            
        }
        //right half sorted
        else{
            mini=min(mini,arr[mid]);
            high=mid-1;
            
        }
    }
    return mini;
}

int main(){
    vector<int>arr={4,5,1,2,3};
    
    cout<<minimumInRotatedSortedArray(arr);
    return 0;
}