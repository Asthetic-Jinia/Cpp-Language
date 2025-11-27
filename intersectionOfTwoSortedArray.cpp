// Intersection of two sorted array

#include<bits/stdc++.h>
using namespace std;

/*
    vector<int>intersection(vector<int>a,vector<int>b,int n,int m){
    int vis[m]={0}; //or, vector<int> vis(m, 0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
            }
            if(b[j]>a[i]){
                break;
            }
        }
    }
    return ans;
}
*/
vector<int>intersection(vector<int>a,vector<int>b,int n,int m){
   int i=0;
   int j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }else if(b[j]<a[i]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int>a={2,3,5,5,6,7};
    vector<int>b={1,2,3,5,5,8};
    int n=a.size();
    int m=b.size();
    vector<int>ans=intersection(a,b,n,m);

    for(int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
    return 0;
}