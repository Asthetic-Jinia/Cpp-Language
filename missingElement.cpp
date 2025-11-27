#include<bits/stdc++.h>
using namespace std;
//Brute Force 
/*
    int main(){
    // Take natural numbers upto N
    int N;
    cout<<"Enter the value of N :";
    cin>> N;
    vector<int>arr={1,2,4,5};
    for(int i=1;i<=N;i++){
       int flag=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==i){
                flag=1; // if the element is present 
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
*/

//Better
/*
    int main(){
    // Take natural numbers upto N
    int N;
    cout<<"Enter the value of N :";
    cin>> N;
    vector<int>arr={1,2,4,5};
    // create hash and initialize with 0
    vector<int>hash(N+1,0);
    //Mark only existing array elements
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]=1;
    }
    //print missing numbers
    for(int i=1;i<N;i++){
        if(hash[i]==0){
            cout<< i<<" ";
        }
    }
    return 0;
}

*/


// Optimal using Sum Method(It is only applicable when one element is missing)
 
/*
int main(){
    int N;
    cout<<"Enter the value of N :";
    cin>> N;
    vector<int>arr={1,2,4,5};
    int sum=N*(N+1)/2;
    int s2=0;
    for(int i=0;i<arr.size();i++){
        s2+=arr[i];
    }
    cout<<(sum-s2);
    return 0;
 }
    */

//Optimal using XOR method
// a^a=0 and 0^a =a
//applicable for only one missing number

int main() {
    int N;
    cout << "Enter the value of N (natural numbers): ";
    cin >> N;

    vector<int> arr(N - 1);
    cout << "Enter " << N - 1 << " elements: ";
    for (int i = 0; i < N - 1; i++) {
        cin >> arr[i];
    }

    int XOR1 = 0, XOR2 = 0;

    // XOR of 1 to N
    for (int i = 1; i <= N; i++) {
        XOR1 ^= i;
    }

    // XOR of array elements
    for (int x : arr) {
        XOR2 ^= x;
    }

    cout << "Missing number is: " << (XOR1 ^ XOR2);
    return 0;
}
