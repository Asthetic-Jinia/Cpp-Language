#include<bits/stdc++.h>
using namespace std;

//Brute
/*
int maxProductSubArr(vector<int>&arr){
    int n=arr.size();
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int mul=1;
            for(int k=i;k<=j;k++){
                mul*=arr[k];
                ans=max(mul,ans);
            }
            
        }
    }
    return ans;
}
*/


//Better
/*
int maxProductSubArr(vector<int>&arr){
    int n=arr.size();
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int mul=1;
        for(int j=i;j<n;j++){
            mul*=arr[j];
            ans=max(mul,ans);
        }
    }
    return ans;
}
*/

//Optimal

int maxProductSubArr(vector<int>&arr){
    int n=arr.size();
    int ans=INT_MIN;
    int pre=1,suf=1;
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre=pre*arr[i];
        suf=suf*arr[n-i-1];
        ans=max(ans,max(pre,suf));
    }
    return ans;
}

int main(){
    vector<int>arr={2,3,-2,4};
    cout<<maxProductSubArr(arr);
    return 0;
}