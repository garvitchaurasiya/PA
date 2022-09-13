#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/

void checkForEscape(vector<vector<char>> &maze, int n, int i, int j){
    if(i==n-1 && j==n-1){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char x; cin>>x;
                cout<<maze[i][j]<<' ';
            }
            cout<<endl;
        }
        return;
    }

    if(j+1 < n && maze[i][j+1] != 'X'){
        maze[i][j+1] = '1';
        checkForEscape(maze, n, i, j+1);
        maze[i][j+1] = '0';
    }
    if(i+1 < n && maze[i+1][j] != 'X'){
        maze[i+1][j] = '1';
        checkForEscape(maze, n, i+1, j);
        maze[i+1][j] = '0';
    }

}

void solve(){

    int n; cin>>n;
    vector< vector<char>> maze(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char x; cin>>x;
            maze[i].push_back(x);
        }
    }
    maze[0][0] = '1';

    checkForEscape(maze, n, 0, 0);
}

signed main(){
    int test; cin>>test;

    while(test--)
        solve();

    return 0;
}