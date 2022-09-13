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
    int fo = -1, lo = -1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){

            if(arr[mid-1]!=arr[mid]){
                fo = mid;
                s = mid+1;
            }
            else if(arr[mid+1]!=arr[mid]){
                lo = mid;
                e = mid-1;
            }

        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    cout<<fo<<' '<<lo<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}