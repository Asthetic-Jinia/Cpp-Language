#include<bits/stdc++.h>
using namespace std;
int minElement(int arr[],int n,int i){
    
    int min=arr[0];
    for( i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
   
    return min;
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
  cout<<"The min element is "<< minElement(arr,n,i);
   return 0;
}