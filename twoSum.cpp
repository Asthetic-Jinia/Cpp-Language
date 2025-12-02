#include<bits/stdc++.h>
using namespace std;

//Brute Force sol

/*
    vector<int> twoSum(vector<int>arr ,int k){
    
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            if(arr[i]+arr[j]==k){
                return {i,j};
            }
        }
    }
    
}
*/
//Better( Hash map)
/*
    vector<int> twoSum(vector<int>arr ,int k){
    
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        if(mpp.find(k-arr[i]) != mpp.end()){
            return {mpp[k-arr[i]],i};
        }
        mpp.insert({arr[i],i});  //Insert the element and its index (or mpp[arr[i]] = i;)
    }
    return {-1,-1};
    
}
*/
string twoSum(vector<int>arr ,int k){
    
    int n=arr.size();
    int left=0,right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum= arr[left]+arr[right];
        if(sum==k){
            return " yes";
        }else if(sum<k){
            left++;
        }else{
            right--;
        }
    }
    return " No";
    
}

int main(){
    vector<int>arr={2,6,5,8,11};
    int k;
    cout<<"Enter the value of K : ";
    cin>>k;
    /* vector<int>result=twoSum(arr,k);
    for(auto it:result){
        cout<< it<<" ";
    } */
    string st=twoSum(arr,k);
   cout << st;
    return 0;
}