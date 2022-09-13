#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/
void solve(){

    int n, key; cin>>n>>key;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int s = 0, e = n-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            cout<<mid<<endl;
            return;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    cout<<-1<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}