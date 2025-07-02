#include<iostream>
using namespace std;
void print1toN(int i, int n){
    
    if(i>n) return ;
    cout<<i<< endl;
   
    print1toN(i+1,n);
    
}

int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>> n;
     print1toN(1,n);
     return 0;
}