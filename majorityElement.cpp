#include<bits/stdc++.h>
using namespace std;

//Brute Force
/*
    int majorityElement(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
       int count=0;
       for(int j=0;j<n;j++){
        if(arr[j]==arr[i]){
            count++;
        }
       }
       if(count>n/2){
        return arr[i];
       }
    }
}
*/

// Better sol using hash map
/*
    int majorityElement(vector<int>arr){
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    for(auto it: mpp){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1;

}
*/

// Moore's Voting algorithm
int majorityElement(vector<int>arr){
    int n=arr.size();
   int count =0;
   int el;
   for(int i=0;i<n;i++){
    if(count==0){
        count=1;
        el=arr[i];
    }
    else if(arr[i]==el){
        count++;
    }else{
        count--;
    }
   }
   int count1=0;
   for(int i=0;i<n;i++){
    if(arr[i]==el){
        count1++;
    }
    
   }
   if(count1>(n/2)){
    return el;
   }
   return -1;
}

int main(){
    vector<int>arr={2,2,3,3,1,2,2};
    cout<< majorityElement(arr);
    return 0;
} 