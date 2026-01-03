#include<bits/stdc++.h>
using namespace std;

// Brute (T.c -> O(N))

/*
vector<int> firstAndLastOccurance(vector<int>&arr,int x){
    int n=arr.size();
    
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    return{first,last};
}
*/

//Better ( using lower and upper bound)
/*
vector<int> firstAndLastOccurance(vector<int>&arr,int x){
    int n=arr.size();
    
    int first=-1,last=-1;
    first=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    last=upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
    // If x does not exist
    if(first==n || arr[first] !=x){
        return {-1,-1};
    }
    return{first,last};
}
*/

// Optimal
int firstOccurance(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}

int lastOccurance(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
}

vector<int> firstAndLastOccurance(vector<int>&arr,int x){
    int n=arr.size();
    int first=firstOccurance(arr,n,x);
    // If x does not exist
    if(first==-1){
        return {-1,-1};
    }
    int last=lastOccurance(arr,n,x);
    return{first,last};
}

int main(){
    vector<int>arr={2,4,6,8,8,8,11,13};
    
    int x;
    cout<<"Enter the value of x= ";
    cin>>x;

    vector<int>ans=firstAndLastOccurance(arr,x);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}