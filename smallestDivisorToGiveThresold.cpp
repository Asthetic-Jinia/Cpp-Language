#include<bits/stdc++.h>
using namespace std;

//Find the smallest divisor to give the threshold value

bool possibleDivisor(vector<int>&arr, int threshold,int mid){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/mid);
    }
    return sum<=threshold;
}

int smallestDivisor(vector<int>&arr, int threshold){
    
    int maxi=INT_MIN;
    int n=arr.size();
    if(n>threshold) return -1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int low=1;
    int high=maxi;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(possibleDivisor(arr,threshold,mid)){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int>arr={1,2,5,9};
    int threshold;
    cout<<"Enter the threshold value: ";
    cin>>threshold;
    cout<<smallestDivisor(arr,threshold);
    return 0;
}