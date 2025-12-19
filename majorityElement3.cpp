#include<bits/stdc++.h>
using namespace std;
// Find the majority Element (>n/3 times)
//Brute
/*
vector<int> majorityElement(vector<int> &arr){
    vector<int>ls;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(ls.size()==0 || ls[0]!=arr[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    
                }
            }
            if(count>(n/3)){
                ls.push_back(arr[i]);
            } 
        }
        if(ls.size()==2) break;
    }
    return ls;
}
*/

//Better (Using unordered hashmap)
/*
vector<int> majorityElement(vector<int> &arr){
    vector<int>ls;
    int n=arr.size();
    unordered_map<int,int>mpp;
    int mini=(int)(n/3)+1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==mini ){
            ls.push_back(arr[i]);
        }
        if(ls.size()==2) break;
    }
    sort(ls.begin(),ls.end());
    return ls;
}
*/
vector<int> majorityElement(vector<int> &arr){
   
    int n=arr.size();
    int count1=0,count2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<n;i++){
        if(count1==0 && arr[i]!=el2){
            count1++;
            el1=arr[i];
        }else if(count2==0 && arr[i]!=el1){
            count2++;
            el2=arr[i];
        }else if(arr[i]==el1){
            count1++;
        }else if(arr[i]==el2){
            count2++;
        }else{
            count1--;
            count2--;
        }
    }
    vector<int>ls;
    count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(el1==arr[i]) count1++;
        if(el2==arr[i]) count2++;
    }
    int mini=(int)(n/3)+1;
    if(count1>=mini) ls.push_back(el1);
    if(count2>=mini) ls.push_back(el2);

    sort(ls.begin(),ls.end());
    return ls;
}

int main(){
    vector<int>arr={1,1,1,1,2,3,3,3};
    vector<int> ls=majorityElement(arr);
    for(auto it: ls){
        cout<<it<<" ";
    }
    return 0;
}