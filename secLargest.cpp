// Brute Force Method 
// At first Sort The Array and and check if the (n-2) th element is less than (n-1)th element or not if less then it is the second largest element but if it is equal then check (n-3)th element

#include<bits/stdc++.h>
using namespace std;

/*void secLargest(int a[],int n){
    //Bubble Sort
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j]<a[j-1]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    int largest=a[n-1];
    for(int i=(n-2);i>=0;i--){
        if(a[i]<largest){
        cout<<"The second largest element is "<< a[i];
        return;
        }
    }
    cout<<"No sec largest element found(All elements are same)";
} */


// Better Solution
/*void secLargest(int a[],int n){
    int largest=a[0];
    int secLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>largest ){
           largest=a[i];  
        }

    }
    cout<<"The largest element is "<< largest;
     for(int i=0;i<n;i++){
        if(a[i]>secLargest && a[i]!=largest ){
           secLargest=a[i];  
        }
        
    }
    cout<<"The second largest element is "<< secLargest;
}*/

void secLargest(int a[],int n){
    int largest=a[0];
    int secLargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            secLargest=largest;
            largest=a[i];
        }
        else{
            if(a[i]>secLargest && a[i]!=largest){
                secLargest=a[i];
            }
        }
    }
    cout<<"The largest element is "<< largest<<endl;
    cout<<"The second largest element is "<< secLargest;
}

int main(){
    int n;
    int a[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    secLargest(a,n);
    return 0;
}