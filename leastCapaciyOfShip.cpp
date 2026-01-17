#include<bits/stdc++.h>
using namespace std;

//Find the least capacity of the ship 

bool possibleDay(vector<int>&arr, int day,int mid){
    int n=arr.size();
    int countWeight=0;
    int d=1;
    for(int i=0;i<n;i++){
        if(countWeight+arr[i] <= mid){
            
            countWeight+=arr[i];
        }else{
            d++;
            countWeight=arr[i];
        }
    }

    return d<=day;
}

int leastCapacity(vector<int>&arr, int day){
    int n=arr.size();
    int mini=*max_element(arr.begin(),arr.end());
    int low=mini;
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(possibleDay(arr,day,mid)){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return low;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int day;
    cout<<"Enter day: ";
    cin>>day;
    cout<<leastCapacity(arr,day);
    return 0;
}