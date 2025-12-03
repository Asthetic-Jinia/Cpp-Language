// Rearrange the  array by positive and negative elements sequentially
#include<bits/stdc++.h>
using namespace std;

//Bruteforce 
/*
    vector<int> rearrangeArray(vector<int>&arr){
    int n=arr.size();
      vector<int> pos;
    vector<int> neg;

    // Store positives and negatives separately
    for (int x : arr) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }
    for(int i=0;i<(n/2);i++){
        arr[2*i]=pos[i];
        arr[(2*i)+1]=neg[i];
    }
    return arr;
    
}
*/
// Optmal (no of +ve and -ve element is equal)
/*
    vector<int> rearrangeArray(vector<int>&arr){
    int n=arr.size();
    vector<int> ans(n,0);
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex+=2;
        }else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
    return ans;
    
}
*/
// Back to brute force (no of +ve and -ve element is not equal)
vector<int> rearrangeArray(vector<int>&arr){
    int size=arr.size();
    vector<int> pos;
    vector<int> neg;
    for(auto it:arr){
        if(it<0){
            neg.push_back(it);
        }else{
            pos.push_back(it);
        }
    }
    int p=pos.size();
    int n=neg.size();
    if(p=n){
        for(int i=0;i<(size/2);i++){
        arr[2*i]=pos[i];
        arr[(2*i)+1]=neg[i];
    }
    }
    if(p>n){
        for(int i=0;i<n;i++){
            arr[2*i]=pos[i];
            arr[(2*i)+1]=neg[i];
        }
        int index=n*2;
        for(int i=n;i<size;i++){
            arr[index]=pos[i];
            index++;
        }
    }
    if(p<n){
        for(int i=0;i<p;i++){
            arr[2*i]=pos[i];
            arr[(2*i)+1]=neg[i];
        }
        int index=p*2;
        for(int i=p;i<size;i++){
            arr[index]=neg[i];
            index++;
        }
    }
    
    return arr;
    
}


int main(){
    vector<int>arr={3,1,-2,-5,2,-4};
    vector<int>a=rearrangeArray(arr);
    for(auto it: a){
        cout<< it<<" ";
    }
    return 0;
}