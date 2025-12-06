#include<bits/stdc++.h>
using namespace std;

// Leaders in array means I have to find the elements on the right side which have all smaller elements

// Brute Force
/*
    vector<int> leadersInArray(vector<int>&arr){
    int n=arr.size();
    vector<int> l;
    for(int i=0;i<n;i++){
        int leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
         
        }
        if(leader==true){
            l.push_back(arr[i]);
        }
    }
    return l;
}

*/

// Optimal Solution

    vector<int> leadersInArray(vector<int>&arr){
    int n=arr.size();
    int leader=arr[n-1];
    vector<int> l={leader};
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
           leader=arr[i] ;
           l.push_back(leader);
        }
        
    }
    return l;
}



int main(){
    vector<int>arr={10,22,12,3,0,6};
    vector<int>a=leadersInArray(arr);
    for(auto it: a){
        cout<< it<<" ";
    }
    return 0;
}