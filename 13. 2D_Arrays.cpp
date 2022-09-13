#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    In the case of 2DArray of type int -> arr[i][j] == *(arr[i]+j) == *( *(arr+i) + j)

    char char2DArray[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'i', 'j', 'k'}
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<char2DArray[j]<<" ";
        }
        cout<<endl;
    }
    OUTPUT : 
    abcdefijk abcdefijk abcdefijk 
    defijk defijk defijk 
    ijk ijk ijk
    => Here  is a garbage value and could be anything and after  there is a '\0' after this garbage value.

    => memset(arr, 0, n*m*sizeof(int))
        -> Here arr is a 2D array.
        -> memset doesn't work if the value is other than 0 or -1 because memset works byte by byte.

*/
void solve(){

    int n, m; cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i%2!=0){
                cout<<arr[n-j-1][i]<<' ';
            }
            else{
                cout<<arr[j][i]<<' ';
            }
        }
        cout<<endl;
    }

    // int n, m; cin>>n>>m;
    // int arr[n][m];
    // memset(arr, -1, n*m*sizeof(int));

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<arr[i][j]<<' ';
    //     }cout<<endl;
    // }
    
    // int brr[n];
    // memset(brr, -2, n*sizeof(int));
    // for(int i=0; i<n; i++){
    //     cout<<brr[i]<<' ';
    // }

    // char char2DArray[3][3] = {
    //     {'a', 'b', 'c'},
    //     {'d', 'e', 'f'},
    //     {'i', 'j', 'k'}
    // };

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<char2DArray[j]<<" ";
    //     }
    //     cout<<endl;
    // }

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}