// create the pair of which the left element is greater
#include<bits/stdc++.h>
using namespace std;

//Brute
/*
int countInversions(vector<int>&arr){
    
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
*/

// Optimal(Using merge sort)

int merge(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int count=0;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            count+=(mid-left+1);
            right ++;
        }
    }

    while(left<=mid){
       temp.push_back(arr[left]);
            left++; 
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right ++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return count;
}

int mergeSort(vector<int>&arr,int low,int high){
    int count=0;
    if(low>=high){
        return count;
    }
    int mid=low+(high-low)/2 ;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}

int countInversions(vector<int>&arr){
    
    int n=arr.size();
    int count=0;
    count=mergeSort(arr,0,n-1);
    return count;
}


int main(){
    vector<int>arr={5,3,2,4,1};
    cout<<countInversions(arr);
   
    return 0;
}