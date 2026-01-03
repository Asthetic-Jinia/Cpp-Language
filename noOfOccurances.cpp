#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}

int lastOccurance(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
}

int noOfOccurances(vector<int>&arr,int x){
    int n=arr.size();
    int first=firstOccurance(arr,n,x);
    // If x does not exist
    if(first==-1){
        return 0;
    }
    int last=lastOccurance(arr,n,x);
   int  ans=last-first+1;
   return ans;
}

int main(){
    vector<int>arr={2,4,6,8,8,8,11,13};
    
    int x;
    cout<<"Enter the value of x= ";
    cin>>x;

    int ans=noOfOccurances(arr,x);
    cout<<ans;
    return 0;
}