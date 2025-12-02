// Find max SunArray Sum
#include<bits/stdc++.h>
using namespace std;
// Brute(if we use another loop of k) or Better
/*
    int maxSubArraySum(vector<int>arr){
    int n=arr.size();
   int  maxi=INT_MIN;
   for(int i=0;i<n;i++){
    int s=0;
    for(int j=i;j<n;j++){
        s+=arr[j];
        maxi=max(s,maxi);
    }
   }
   return maxi;
}
*/

//Optimal(Kadane's Algo)
/*
int maxSubArraySum(vector<int>arr){
    int n=arr.size();
   int  maxi=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
   return maxi;
}
*/

// To print the sub array with maximum sum
vector<int> maxSubArraySum(vector<int>arr){
    int n=arr.size();
   int  maxi=INT_MIN;
   int sum=0;
   int ansStart=-1;
   int ansEnd=-1;
   int start;
   for(int i=0;i<n;i++){
    if(sum==0){
      start=i;  
    }
     sum+=arr[i];   
    if(sum>maxi){
        maxi=sum;
        ansStart=start;
        ansEnd=i;
    }
    if(sum<0){
        sum=0;
    }
    }
   return vector<int>(arr.begin() + ansStart, arr.begin() + ansEnd + 1);
}

int main(){

    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    vector<int> a=maxSubArraySum(arr);
    //cout<< a;
    for(auto it: a){
        cout<< it<<" ";
    }
    return 0;
}
