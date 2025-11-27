#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    vector<int>arr={5,2,3,5,1,3,4,2};

    set<int>s(arr.begin(),arr.end());

    cout<<"Array after removing duplicates using set :";
    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}*/

// Using two pointers method( It is only applicable for sorted array)
int main(){
    vector<int>arr={1,1,2,2,2,3,4,4,5};
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j]; // i is the place where unique element is written and j scan the whole array
        }
    }
    cout<<"No of unique elements is :"<<i+1;

    return 0;
}