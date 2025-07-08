#include<bits/stdc++.h>
using namespace std;
int maxElement(int arr[],int n,int i){
    
    int max=arr[0];
    for( i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
   
    return max;
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
  cout<<"The max element is "<< maxElement(arr,n,i);
   return 0;
}