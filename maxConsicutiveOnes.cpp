#include<bits/stdc++.h>
using namespace std;

int consicutiveOne(vector<int>arr){
    int count=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }
    }
    return maxi;
}

int main(){
    vector<int>arr={1,1,0,0,1,1,1,0,1,0,1,1};
    cout<<consicutiveOne(arr);

    return 0;
}