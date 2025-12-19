#include<bits/stdc++.h>
using namespace std;

// Type-1 (Row(0 to N th) and column(0 to N th) is given, Tell the element at that place)
// Brute
/*
    int factorial(int n){
    
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
    }

    int main(){
    int n,r;
    cout<<"Enter the row : ";
    cin>>n;
    cout<<"Enter the column : ";
    cin>>r;
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    int ans=a/(b*c);
    cout<<ans;
    return 0;
    }
*/
//Better

/*
    int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

int main(){
    int n,r;
    cout<<"Enter the row : ";
    cin>>n;
    cout<<"Enter the column : ";
    cin>>r;
    int res=nCr(n,r);
    cout<<res;
    return 0;
}

*/

//Type-2 (N th row is given print the whole row, and the value of N starts from 0)

//Brute
/*
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}
void generateRow(int n){
    for(int c=0;c<=n;c++){
        cout<<(nCr(n,c))<<" ";
    }
    return;
}

int main(){
    int n,r;
    cout<<"Enter the row : ";
    cin>>n;
    
    generateRow(n);
    return 0;
}


*/
// Better
/*
void generateRow(int n){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<=n;i++){
        ans=ans*(n-i+1);
        ans=ans/i;
        cout<<ans<<" ";
    }
    return;
}

int main(){
    int n,r;
    cout<<"Enter the row : ";
    cin>>n;
    
    generateRow(n);
    return 0;
}
*/

// Type-3 (Print the whole pascal Triangle)
/*
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>>ans;
    for(int row=0;row<n;row++){
        vector<int> tempList;
        for(int col=0;col<=row;col++){
            tempList.push_back(nCr(row,col));
        }
        ans.push_back(tempList);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the n th row (from 1): ";
    cin>>n;
    vector<vector<int>> ans= pascalTriangle(n);
    for(auto row : ans){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//Optimal
vector<int>generateRow(int row){
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/(col);
        ansRow.push_back(ans);

    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N){
    vector<vector<int>>ans;
    
    for(int row=1;row<=N;row++){
        ans.push_back(generateRow(row));

    }
    return ans;
}
int main(){
    int N;
    cout<<"Enter the n th row (from 1): ";
    cin>>N;
    vector<vector<int>> ans= pascalTriangle(N);
    for(auto row : ans){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}