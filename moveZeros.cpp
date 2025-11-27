#include<bits/stdc++.h>
using namespace std;

// Moving all zeros at the end of the array
//Brute force method
/*
    int main(){
    vector<int>arr={1,3,4,0,1,0,7,0,0,0,5,0,9};
    int n=arr.size();
    vector<int>temp;
    
    //copy the non zero elements in temp array
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
           temp.push_back(arr[i]);
        }
    }
    // count no of non zero elements
    int nz=temp.size();
    // Final array

    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }

    for(int i=nz;i<n;i++){
        arr[i]=0;
    }

    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
int main(){
    vector<int>arr={1,3,4,0,1,0,7,0,0,0,5,0,9};
    int n=arr.size();
    
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}