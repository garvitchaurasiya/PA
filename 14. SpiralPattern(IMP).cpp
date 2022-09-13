#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/
void solve(){

    int n, m; cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int sr = 0, sc = 0, er = n-1, ec = n-1;

    while(sr<=er and sc<=ec){

        for(int j = sc; j<=ec; j++){
            cout<<arr[sr][j]<<' ';
        }
        sr++;
        for(int i = sr; i <= er; i++){
            cout<<arr[i][ec]<<' ';
        }
        ec--;
        for(int j=ec; j>=sc; j--){
            cout<<arr[er][j]<<" ";
        }
        er--;
        for(int i=er; i>=sr; i--){
            cout<<arr[i][sc]<<' ';
        }
        sc++;

    }

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}