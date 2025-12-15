#include<bits/stdc++.h>
using namespace std;

// Find 0 in the matrix and set the row and column as 0
//BruteForce

/*
    vector<vector<int>> setMatrix(vector<vector<int>> &matrix, int row, int col) {

    //find 0 and mark the row and column
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                //markRow
                for(int j=0;j<col;j++){
                    if(matrix[i][j]!=0){
                        matrix[i][j]=-1;
                    }
                } 
                //markCol
                for(int i=0;i<row;i++){
                    if(matrix[i][j]!=0){
                        matrix[i][j]=-1;
                    }
                }
            }
        }
    }
    // Convert all -1 to 1
    for(int i;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
*/

// Better 

/*
    
vector<vector<int>> setMatrix(vector<vector<int>> &matrix, int row, int col) {
    // Take two arrays and mark them
    int rows[row]={0};
    int cols[col]={0};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    // Convert the row and column to 0
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rows[i]==1 || cols[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
*/



//Optimal
vector<vector<int>> setMatrix(vector<vector<int>> &matrix, int row, int col) {
    int col0=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                // Mark row
                matrix[i][0]=0;
                // Mark column
                if(j!=0){
                    matrix[0][j]=0;
                }else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<col;j++){
            matrix[0][j]=0;

        }
        if(col0==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
    }
    
    return matrix;
}

int main() {
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    setMatrix(matrix, row, col);

    cout << "Result Matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
