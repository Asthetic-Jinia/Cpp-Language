#include<bits/stdc++.h>
using namespace std;
// Only optimal solution => right->bottom->left->top
vector<int> spiralMatrix(vector<vector<int>> &matrix,int row,int col,vector<int> &ans){
    int left=0,right=col-1;
    int top=0,bottom=row-1;
    while(top<=bottom && left<=right){
        // right
        for(int i=left;i<=right;i++){
           ans.push_back(matrix[top][i]);
        }
        top++;

        // bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        //left
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;   
        }
        

        //top
        if(left<=right){

            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

    }
    return ans;
}

int main(){
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));
    vector<int> ans;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralMatrix(matrix, row, col,ans);

    cout << "Result Matrix:\n";
    for(int x : ans){
    cout << x << " ";
    }

    return 0;
}