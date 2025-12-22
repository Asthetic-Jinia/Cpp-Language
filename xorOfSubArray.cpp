#include<bits/stdc++.h>
using namespace std;

//Count The no of Sub array with XOR of value k

//Brute
/*
int subArrXor(vector<int> &arr,int target){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int XOR=0;
            for(int k=i;k<=j;k++){
                XOR^=arr[k];
                
            }
            if(XOR==target){
                    count++;
            }
        }
    }
    return count;
}

*/

//Better
/*
int subArrXor(vector<int> &arr,int target){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int XOR=0;
        for(int j=i;j<n;j++){
            XOR^=arr[j];
           
            if(XOR==target){
                count++;
            }
        }
    }
    return count;
}
*/
int subArrXor(vector<int> &arr,int target){
    int n=arr.size();
    int count=0;
    int xr=0;
    map<int,int>mpp; // (xor,count)
    mpp[xr]++; //(0,1) is inserted
    for(int i=0;i<n;i++){
     xr=xr^arr[i];
     int x=xr^target;
     count+=mpp[x];
     mpp[xr]++; 
        
    }
    return count;
}

int main(){
    int k;
    vector<int>arr={4,2,2,6,4};
    cout<<"Enter the Value of k: ";
    cin>>k;
    int cnt=subArrXor(arr,k);
    cout<< cnt;
    return 0;
}