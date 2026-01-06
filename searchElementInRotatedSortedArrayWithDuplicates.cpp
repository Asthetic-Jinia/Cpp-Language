#include<bits/stdc++.h>
using namespace std;

bool searchElementInRotatedSortedArrayWithDuplicates(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target) return true;
        // If the elements of low mid and high are same , then trim down the search space
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        // Find the sorted half

        // left half sorted
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<=arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        // right half sorted
        else{
            if(target>=arr[mid] && target<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return false;
}

int main(){
    vector<int>arr={7,8,1,2,3,3,3,4,5,6};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    cout<<searchElementInRotatedSortedArrayWithDuplicates(arr,target);
    return 0;
}