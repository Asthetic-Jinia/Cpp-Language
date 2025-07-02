#include<iostream>
using namespace std;
void printNto1(int n, int i){
    
    if(i>n) return ;
    cout<<n<< endl;
   
    printNto1(n-1,i);
    
}

int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>> n;
     printNto1 (n,1);
     return 0;
}