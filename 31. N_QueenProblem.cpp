#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/

bool isSafe(int n, vector<vector<char>> board, int i, int j){
    
    for(int k=0; k<i; k++){
        if(board[k][j]=='Q'){
            return false;
        }
    }
    
    int x=i-1, y=j-1;

    while(x>=0 && y>=0){
        if(board[x][y] == 'Q'){
            return false;
        }
        x--; y--;
    }
    x = i-1, y=j+1;
    while(x>=0 && y<n){
        if(board[x][y] == 'Q'){
            return false;
        }
        x--; y++;
    }
    return true;

}

void placeNQueens(int n, vector<vector<char>> board, int i, int j, int queenPlaced){
    
    if(queenPlaced==n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    if(i>=n || j>=n){
        return;
    }

    if(isSafe(n, board, i, j)){
        queenPlaced++;
        board[i][j] = 'Q';
        placeNQueens(n, board, i+1, 0, queenPlaced);
        queenPlaced--;
        board[i][j] = '_';
    }
    
    placeNQueens(n, board, i, j+1, queenPlaced);
        
}

void solve(){

    int n; cin>>n;
    vector<vector<char>> board(n, vector<char>(n, '_'));

    placeNQueens(n, board, 0, 0, 0);

}

signed main(){
    int test; cin>>test;

    while(test--)
        solve();

    return 0;
}