#include<bits/stdc++.h>
using namespace std;
//Left rotate an Array by D place
//Brute force Solution
/*
    int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int d;
    int n=arr.size();
    cout<<"Enter the value of d :";
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        
        arr[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} */

//Optimal Solution

void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
     int d;
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[100];
    cout<<"Enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of d :";
    cin>>d;
    d=d%n;
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}