#include<bits/stdc++.h>
using namespace std;

int maximum(vector<int>&piles){
    int maxi=-1;
    for(int i=0;i<piles.size();i++){
        if(piles[i]>maxi){
            maxi=piles[i];
        }
    }
    return maxi;
}

int takenTime(vector<int>&piles,int k,int h){
    // here, k=mid;
    int t=0;// t->total time taken by koko
    for(int i=0;i<piles.size();i++){
        t+=ceil((double)piles[i] / (double)k);

    }
    return t;
}

int kokoEatingBanana(vector<int>&piles,int h){
    int k;
    int n=piles.size();
    int maxi=maximum(piles);
    int low=1;
    int high=maxi;
    while(low<=high){
        int mid=low+((high-low)/2);
        int t=takenTime(piles,mid,h);
        if(t<=h) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    vector<int>piles={82,37};
    int h;
    cout<<"How much time is given to koko(Enter the value of h): ";
    cin>>h;
    cout<<kokoEatingBanana(piles,h);
    return 0;
}