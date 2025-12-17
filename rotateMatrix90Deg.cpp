#include<bits/stdc++.h>
using namespace std;

// Rotate the matrix by 90 degree
//Brute
/*
    vector<vector<int>> rotateMatrix90(vector<vector<int>> &matrix, int row,int col,vector<vector<int>> &newMatrix){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           newMatrix[j][row-1-i]= matrix[i][j];
        }
        
    }
    return newMatrix;

}
*/

// Optimal 
// At first Transpose it and reverse every row
vector<vector<int>> rotateMatrix90(vector<vector<int>> &matrix, int row,int col,vector<vector<int>> &newMatrix){
    //Transpose
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    // Reverse every row
    for(int i=0;i<row;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;

}


int main(){

    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));
    vector<vector<int>> newMatrix(col, vector<int>(row));

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix90(matrix, row, col,newMatrix);

    cout << "Result Matrix:\n";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}