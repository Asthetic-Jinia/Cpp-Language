#include<bits/stdc++.h>
using namespace std;
// Find the no of sub arrays with sum K in the array
//Brute 

/*
int subArr(vector<int> &arr,int k){
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==k){
                count++;
            }
        }
    }
    return count;
}
*/

//Optimal
// Prefix sum method using hash map
int subArr(vector<int> &arr,int k){
    unordered_map<int,int>mpp;
    mpp[0]=1;
    int preSum=0,cnt=0;
    // T.c-> O(N log N)
    //S.c->O(N)        
    for(int i=0;i<arr.size();i++){
        preSum+=arr[i];
        int remove=preSum-k;
        cnt+=mpp[remove];
        mpp[preSum]+=1;
    }
    return cnt;
}


int main(){
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
    int k;
    cout<<"Enter the value of K : ";
    cin>>k;
    int count=subArr(arr,k);
    cout<<" No of sub array with sum K = "<<count;
    return 0;
}