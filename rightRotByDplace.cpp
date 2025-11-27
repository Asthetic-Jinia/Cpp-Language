#include<bits/stdc++.h>
using namespace std;

// optimal solution is same as left rotate

// Brute force sol of right rotate by D place
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int d;
    int n=arr.size();
    cout<<"Enter the value of d :";
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[n-d+i];
    }
    
    for(int i=n-d-1;i>=0;i--){
        arr[d+i]=arr[i];
    }
     for(int i=0;i<d;i++){
        
        arr[i]=temp[i];
    }
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 