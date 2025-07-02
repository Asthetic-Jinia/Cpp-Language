#include<iostream>
using namespace std;
int sum( int n){
    
    if(n==0) return 0;
    return  n+sum(n-1);
     
}

int main(){
    int i,n;
    cout<<"Enter the value of n=";
    cin>> n;
     sum(n);
     cout<<sum(n);
     return 0;
}