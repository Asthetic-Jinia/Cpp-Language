#include<iostream>
using namespace std;
    void printNumber(int x) {
        cout<< "Enter the value of x=";
        cin >>x;
        cout <<x;
        return;
    }


int main(){
   int x; 
    printNumber(x);
    return 0;
}