#include<bits/stdc++.h>
using namespace std;

// return 1 if ==M
//return  0 if<M
// return 2 if>M

int func(int mid,int N,int M){
    long long ans=1;
        for(int i=1;i<=N;i++){
            ans=ans*mid;
            if(ans>M) return 2;
        }
        if(ans==M)  return 1;
        return 0;
}

int NthRoot(int N,int M){
    int low=1;
    int high=M;
    while(low<=high){
        int mid=low+((high-low)/2);
        int midN=func(mid,N,M);
        if(midN==1) return mid;
        else if(midN==0){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int N;
    cout<<"Enter the value of N= ";
    cin>>N;
    int M;
    cout<<"Enter the number= ";
    cin>>M;
    cout<<NthRoot(N,M);
}