#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr,int low,int high ,int target){
    int n=arr.size();
    low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+((high-low)/2);
        //may be an answer
        if(arr[mid]>=target){
            ans=mid;
            // look for more small index on left
            high=mid-1;
        }else{
            low=mid+1;  // look for right
        }
    }
    return ans;
}
// we can write, lb=lower_bound(arr.begin(),arr.end(),n)-arr.begin();
// or, lb=lower_bound(arr,arr+n)

int upperBound(vector<int>&arr,int low,int high ,int target){
    int n=arr.size();
    low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+((high-low)/2);
        //may be an answer
        if(arr[mid]>target){
            ans=mid;
            // look for more small index on left
            high=mid-1;
        }else{
            low=mid+1;  // look for right
        }
    }
    return ans;
}

int main(){
    int target;
    cout<<"Enter the target element= ";
    cin>>target;
    vector<int>arr={1,2,3,3,5,8,8,10,10,11};
    int n=arr.size();
    cout<<lowerBound(arr,0,n-1,target)<< endl;
    cout<<upperBound(arr,0,n-1,target);
    return 0;
}