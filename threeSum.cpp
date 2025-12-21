#include<bits/stdc++.h>
using namespace std;

//Brute
// Find and return the lists of three unique elements the summation of which is 0
/*
vector<vector<int>> threeSum(vector<int> &arr,int target){
    set<vector<int>> st;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
*/


// Better (using hash set)
/*
vector<vector<int>> threeSum(vector<int> &arr,int target){
    set<vector<int>> st;
    int n=arr.size();

    for(int i=0;i<n;i++){
        set<int>hashSet;
        for(int j=i+1;j<n;j++){
            int third=-(arr[i]+arr[j]);
            if(hashSet.find(third)!=hashSet.end()){
                vector<int>temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashSet.insert(arr[j]);
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
*/

//Optimal (two pointers)
vector<vector<int>> threeSum(vector<int> &arr,int target){
    vector<vector<int>>ans;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        long long sum=arr[i]+arr[j]+arr[k];
        while(j<k){
            if(sum<0){
                j++;
            }else if(sum>0){
                k--;
            }else{
                vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1] ) j++;
                while(j<k && arr[k]==arr[k+1] ) k--;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    cout<<"Enter the value of target : ";
    int k;
    cin>>k;
    vector<vector<int>> ans=threeSum(arr,k);
    for(auto row : ans){
        for(auto col : row){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}