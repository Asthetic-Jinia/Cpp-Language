#include<bits/stdc++.h>
using namespace std;
int secMinElement(int arr[],int n,int i){
    
    int min=arr[0];
    int secMin=INT_MAX;
    for( i=1;i<n;i++){
        if(arr[i]<min){
            secMin=min;
            min=arr[i];
        }else if(arr[i]>min && arr[i]<secMin){
            secMin=arr[i];
        }
    }
   
    return secMin;
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
  cout<<"The second max element is "<< secMinElement(arr,n,i);
   return 0;
}