#include<bits/stdc++.h>
using namespace std;
int secMaxElement(int arr[],int n,int i){
    
    int max=arr[0];
    int secMax=INT_MIN;
    for( i=1;i<n;i++){
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }else if(arr[i]<max && arr[i]>secMax){
            secMax=arr[i];
        }
    }
   
    return secMax;
}
int main(){
    int n,i;
    cout<<"Enter the size of array=";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements=";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
  cout<<"The second max element is "<< secMaxElement(arr,n,i);
   return 0;
}