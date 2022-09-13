#include "bits/stdc++.h"
using namespace std;
#define int long long

// TIME COMPLEXITY -> O(N^2 + N(logN))

void solve(){

    int n, sum; cin>>n>>sum;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    
    for (int i=0; i<=n-3; i++){
        int l = i+1, r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r] == sum){
                cout<<arr[i]<<' '<<arr[l]<<' '<<arr[r]<<endl;
                l++; r--;
            }
            else if(arr[i]+arr[l]+arr[r]>sum){
                r--;
            }
            else{
                l++;
            }
        }
    }

}
signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}