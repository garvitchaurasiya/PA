#include "bits/stdc++.h"
using namespace std;
#define int long long

// TIME COMPLEXITY -> O(N);

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxi = max(maxi, sum);
    }
    cout<<maxi<<endl;
}

void two_loop_algo(){
    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=i; j>=0; j--){
            sum+=arr[j];
        }
        maxi = max(maxi, sum);
    }

    cout<<maxi<<endl;
}

signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}