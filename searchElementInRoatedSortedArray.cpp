#include<bits/stdc++.h>
using namespace std;

int searchElementInRoatedSortedArray(vector<int>&arr,int target){
    int n=arr.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;

        // Left half sorted
        if(arr[low]<=arr[mid]){
            // find if target is in between low and mid
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            //find if target is in between  mid and high
            else{
                low=mid+1;
            }
        }

        // Right half sorted

        else{
           // find if target is in between  mid and high
           if(arr[mid]<=target && target<=arr[high]){
            low=mid+1;
           }
           //find if target is in between low and mid
           else{
            high=mid-1;
           }
        }
    }
    return -1;

} 

int main(){
    vector<int>arr={7,8,9,1,2,3,4,5,6};
    int target;
    cout<<"Enter the target=";
    cin>>target;
    cout<<searchElementInRoatedSortedArray(arr,target);
    return 0;
}