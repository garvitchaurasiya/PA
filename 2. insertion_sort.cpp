#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){

    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int j=i-1;
        int curr = arr[i];
        for(; j>=0; j--){
            if(curr<arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = curr;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }


}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}