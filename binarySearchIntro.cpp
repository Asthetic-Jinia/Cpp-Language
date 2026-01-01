#include<bits/stdc++.h>
using namespace std;
// using Iterative process
/*
int bs(vector<int> &arr,int low,int high,int target){
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1; // If the target is not present in the array
}
*/

//Using recurtion

int bs(vector<int>&arr,int low,int high ,int target){
    
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(target>arr[mid]) return bs(arr,mid+1,high,target);
    else return bs(arr,low,mid-1,target);
}



int main(){
    int target;
    cout<<"Enter the target element= ";
    cin>>target;
    vector<int>arr={3,4,6,7,9,12,16,17};
    int n=arr.size();
    cout<<bs(arr,0,n-1,target);
    return 0;
}