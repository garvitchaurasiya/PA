#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/

bool isSafe(vector<vector<int>> &sudoku, int i, int j, int num){

    for(int x = 0; x<9; x++){
        if(x!=j && sudoku[i][x] == num){
            return false;
        }
    }

    for(int x = 0; x<9; x++){
        if(i!=x && sudoku[x][j] == num){
            return false;
        }
    }

    int k, l;
    if(i<=2){
        k=0;
    }
    else if(i<=5){
        k=3;
    }
    else{
        k=6;
    }
    if(j<=2){
        l=0;
    }
    else if(j<=5){
        l=3;
    }
    else{
        l=6;
    }
    for(int x=k; x<k+3; x++){
        for(int y=l; y<l+3; y++){
            if(x!=i && y!=j && sudoku[x][y]==num){
                return false;
            }
        }
    }

    return true;

}
bool flag=false;
void sudokuHelper(vector<vector<int>> &sudoku, int i, int j){
    if(flag) return;
    // base condition
    if(j==9){
        sudokuHelper(sudoku, i+1, 0);
    }
    if(i==9){
        flag=true;
        for(int k=0; k<9; k++){
            for(int l=0; l<9; l++){
                cout<<sudoku[k][l]<<' ';
            }
            cout<<endl;
        }
        return;
    }


    
    if(sudoku[i][j] == 0){

        for(int num=1; num<=9; num++){
            if(isSafe(sudoku, i, j, num)){
                sudoku[i][j] = num;
                sudokuHelper(sudoku, i, j+1);
                sudoku[i][j] = 0;
            }
        }
        
    }
        


}

void solve(){

    vector<vector<int>> sudoku(9, vector<int>(9, 0));

    sudokuHelper(sudoku, 0, 0);

    

    

}

signed main(){
    int test; cin>>test;

    while(test--)
        solve();

    return 0;
}