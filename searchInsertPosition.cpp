#include<bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int>&arr,int target){
    int n=arr.size();
    int low=0,high=n-1;
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
   // int lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
   // return lb;
}



int main(){
    int target;
    cout<<"Enter the target element= ";
    cin>>target;
    vector<int>arr={1,2,4,7};
    int n=arr.size();
    cout<<searchInsertPosition(arr,target);
    return 0;
}