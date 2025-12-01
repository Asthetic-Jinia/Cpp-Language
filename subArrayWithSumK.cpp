#include<bits/stdc++.h>
using namespace std;

//Brute Force method
/*
    int subArrayWithSumK(vector<int>arr,int k){
    int n=arr.size();
    int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==k){
                len= max(len,j-i+1);
                
            }
        }
    }
    return len;
}
*/

// better solution using hash map (for +ve ,0, -ve)
/*
int subArrayWithSumK(vector<int>arr,long long k){
    int n=arr.size();
    map<long,int>preSumMap;
    int maxLen=0;
    long long sum=0;
    for(int i=0;i<n;i++){
       sum+=arr[i];
       if(sum==k){
        maxLen=max(maxLen,i+1);
       }
       int rem=sum-k;
       if(preSumMap.find(rem)!= preSumMap.end()){
           int  len=i-preSumMap[rem];
           maxLen=max(maxLen,len);
       }
       if(preSumMap.find(sum)== preSumMap.end()){
        preSumMap[sum]=i;
       }
    }
    return maxLen;
}
*/

// Optimal approach ( only for 0 and +ve no)

int subArrayWithSumK(vector<int>arr,long long k){
    int n=arr.size();
    int maxLen=0;
    long long sum=arr[0];
    int left=0,right=0;
   while(right<n ){
        while (left <= right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
       if(sum==k){
        maxLen=max(maxLen,right-left+1);
       } 
        right++;
       if(right<n) {
         sum+=arr[right];
       }
    }

    return maxLen;
}

int main(){
    vector<int>arr={1,2,3,1,1,1,4,2,3,1};
    int k;
    cout<<"Enter the value of K";
    cin>>k;
    int result=subArrayWithSumK(arr,k);
    cout<<"The length of Longest sub array with sum k :"<<result;
    return 0;
}