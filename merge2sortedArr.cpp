// Merge two sorted array without using any extra spaces
#include<bits/stdc++.h>
using namespace std;

// Brute (Where we have to use extra space)
//It is like the merge sort
/*
vector<vector<int>> mergeTwoSortedArr(vector<int>&arr1 ,vector<int>&arr2){
    vector<vector<int>>newAns;
    vector<int>ans;
    int n=arr1.size();
    int m=arr2.size();
    int left=0;
    int right=0;
    while(left<n && right<m){
        if(arr1[left]<=arr2[right]){
            ans.push_back(arr1[left]);
            left++;
        }else{
           ans.push_back(arr2[right]); 
           right++;
        }
    }
    while(left<n){
       ans.push_back(arr1[left]); 
       left++;
    }
    while(right<m){
        ans.push_back(arr2[right]);
        right++;  
    }
    for(int i=0;i<n+m;i++){
        if(i<n) arr1[i]=ans[i];
        else    arr2[i-n]=ans[i];
    }
    newAns.push_back(arr1);
    newAns.push_back(arr2);
    return newAns;
}

*/
//Optimal -Method 1
/*
vector<vector<int>> mergeTwoSortedArr(vector<int>&arr1 ,vector<int>&arr2){
    vector<vector<int>>newAns;
    vector<int>ans;
    int n=arr1.size();
    int m=arr2.size();
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
    newAns.push_back(arr1);
    newAns.push_back(arr2);
    return newAns;
}
*/

// Optimal- Type 2 (Shell Sort-> using gap method)
vector<vector<int>> mergeTwoSortedArr(vector<int>&arr1 ,vector<int>&arr2){
    vector<vector<int>>newAns;
    vector<int>ans;
    int n=arr1.size();
    int m=arr2.size();
    int len=(m+n);
    int gap=((len)/2) + ((len)%2);
   
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            //arr1 and arr2
            if(left<n && right>=n){
                if(arr1[left]>arr2[right-n]){
                    swap(arr1[left],arr2[right-n]);
                    
                }

            }
            // arr2 and arr2
            else if(left>=n){
               if(arr2[left-n]>arr2[right-n]){
                    swap(arr2[left-n],arr2[right-n]);
                    
                } 
            }
            // arr1 and arr1
            else{
                if(arr1[left]>arr1[right]){
                    swap(arr1[left],arr1[right]);
                    
                } 
            }
            left++;
            right ++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
    
    
    
    newAns.push_back(arr1);
    newAns.push_back(arr2);
    return newAns;
}


int main(){
    vector<int>arr1={1,3,5,7};
    vector<int>arr2={0,2,6,8,9};
    
    vector<vector<int>>newans=mergeTwoSortedArr(arr1,arr2);
    for(auto row:newans){
        
        for(auto col:row){
            cout<< col<<" ";
        }
        cout<<endl;
    }
    return 0;
}
