// Find the element(only one) which appear once but others appear twice
#include<bits/stdc++.h>
using namespace std;
//Brute force solution
/*
    int appearOnce(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
           
        }
         if(count==1){
                return num;
            }
    }
}
*/

// Better solution 
//Using hashing
/*
    int appearOnce(vector<int>arr){
    int maxi=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if (hash[arr[i]]==1){
            return arr[i];
        }
    }
}
*/

//using map
/*
int appearOnce(vector<int>arr){
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second==1){
            return it.first;
        }
    }
}
*/


//Optimal sol
int appearOnce(vector<int>arr){
 int XOR=0;
 for(int i=0;i<arr.size();i++){
    XOR=XOR^arr[i];

 }
 return XOR;
}

int main(){
    vector<int>arr={1,1,2,3,3,4,4,5,5};
    cout<<appearOnce(arr);

    return 0;
}