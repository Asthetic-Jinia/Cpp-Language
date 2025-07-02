#include<bits/stdc++.h>

using namespace std;

void revArray( int i, int arr[],int n){
 if(i>=n/2) return ;
 swap (arr[i],arr[n-i-1]);
    return revArray(i,arr,n);
}

int main(){
    int i,n;
   cout<<"Enter the size of array=";
    cin>> n;
    int arr[n];
    
    cout<<"Enter the elements of the array=";
    for(i=0;i<n;i++){
        cin>> arr[i];
     }
    
     revArray(0,arr,n);
     for(i=0;i<n;i++){
        cout<< arr[i]<<" ";
     }
     return 0;
}