#include<iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 ....
int fibo( int n){
    
    if(n==1) return 0;
    if(n==2) return 1;

    return  fibo(n-1)+fibo(n-2);
     
}

int main(){
    int i,n;
    cout<<"Enter the value of n=";
    cin>> n;
     fibo(n);
     cout<<fibo(n);
     return 0;
}