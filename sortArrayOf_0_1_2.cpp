// Sort array of 0's, 1's and 2's 
#include<bits/stdc++.h>
using namespace std;

//Brute Force
//Use Merge Sort

//Better solution
/*
    vector<int> sort(vector<int>arr){
    int n=arr.size();
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }

    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
    return arr;
}
*/

//optimal(Duch national flag algo)
vector<int> sort(vector<int>arr){
    int n=arr.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
   
    return arr;
}

int main(){

    vector<int>arr={0,1,0,2,0,1,0,1,2,2,0,1};
    vector<int>a=sort(arr);
    for(auto it: a){
        cout<< it<<" ";
    }
    return 0;
}
