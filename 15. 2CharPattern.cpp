#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    print for 4 x 4
    char1 = x, char2 = o
    x x x x x
    x o o o x
    x o x o x
    x o o o x
    x x x x x
*/
void solve(){

    int n, m; cin>>n>>m;
    char ch1, ch2; cin>>ch1>>ch2;
    char arr[n][m];

    
    char ch = ch1;
    int sr = 0, sc = 0, er = n-1, ec = n-1;

    while(sr<=er and sc<=ec){

        for(int j = sc; j<=ec; j++){
            arr[sr][j] = ch;
        }
        sr++;
        for(int i = sr; i <= er; i++){
            arr[i][ec] = ch;
        }
        ec--;
        for(int j=ec; j>=sc; j--){
            arr[er][j] = ch;
        }
        er--;
        for(int i=er; i>=sr; i--){
            arr[i][sc] = ch;
        }
        sc++;
        
        ch==ch1?ch=ch2:ch=ch1;
        
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}