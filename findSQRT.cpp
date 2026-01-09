#include<bits/stdc++.h>
using namespace std;
//Find the square root of an integer(find the max integer on squaring <=n)
//Brute (using Linear search)
/*
int sqrt(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        if(i*i <=n){
            ans=i;
        }else{
            break;
        }
    }
    return ans;
}
*/

//Optimal (using Binary search)
int sqrt(int n){
    int ans=1;
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid <=n){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n (any number)=";
    cin>>n;
    cout<<sqrt(n);
}