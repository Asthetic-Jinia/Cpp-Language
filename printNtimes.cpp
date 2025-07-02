#include<iostream>
using namespace std;
void printingName(int i, int n){
    
    if(i>n) return ;
    cout<<"Jinia"<< endl;
   
    printingName(i+1,n);
    
}

int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>> n;
     printingName(1,n);
     return 0;
}