// Find the min no of days to make m bouquets with k adjacent flowers
#include<bits/stdc++.h>
using namespace std;

// if (bouquetNo>=m) return 1; or Direct return the condition;

bool possibleDay(vector<int>&arr,int m,int k,int mid){
    int n=arr.size();
    int bouquetNo=0;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<=mid){
            count++;
            
        }else{
            bouquetNo+=(count/k);
            count=0;
        }
    }
    bouquetNo+=(count/k);
    return bouquetNo>=m;
    
}
int bs(vector<int>&arr,int m,int k){
    long long val=m * 1LL * k * 1LL;
    int n=arr.size();
    if(val>n) return -1;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    int low=mini;
    int high=maxi;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(possibleDay(arr,m,k,mid)){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    int m,k;
    vector<int>arr={7,7,7,7,13,11,12,7};
    cout<<"Enter the no of bouquets we want(m): ";
    cin>>m;
    cout<<"Enter the no of adjacent flowers we want in one bouquets: ";
    cin>>k;

    cout<<bs(arr,m,k);
}