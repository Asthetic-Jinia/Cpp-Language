#include<bits/stdc++.h>
using namespace std;

int ceil(vector<int>&arr,int target){
    int ceil= lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    return arr[ceil];
}
int floor(vector<int>&arr,int target){
    int floor;
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]<=target){
            floor=arr[mid];
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return floor;
}

int main(){
    vector<int>arr={10,20,30,40,50};
    int target;
    cout<<"Enter the target= ";
    cin>>target;
    cout<<"Floor= "<<floor(arr,target)<<endl;
    cout<<"ceil= "<<ceil(arr,target);
}