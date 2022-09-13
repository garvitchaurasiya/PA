#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    Good Subarray is when sum of elements are divisible by n.
*/

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int csum[n];
    
    memset(csum, 0, n);

    csum[0] = arr[0];

    for(int i=1; i<n; i++){
        csum[i] = csum[i-1] + arr[i];
        csum[i] = csum[i] % n;
        csum[i] = (csum[i]+n) % n;
    }

    int freq[100] = {0};
    freq[0]++;

    for(int i=0; i<n; i++){
        freq[csum[i]]++;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        ans+= (freq[i]) * (freq[i]-1)/2;
    }
    cout<<ans<<endl;

}

void notOptimal(){ // Time complexity

    int n; cin>>n;
    int arr[n+1];
    
    int prefixSum[n+1];

    for(int i=1; i<=n; i++){

        cin>>arr[i];
    }
    prefixSum[1] = arr[1];
    arr[0]=prefixSum[0]=0;
    for(int i=2; i<=n; i++){
        prefixSum[i] = prefixSum[i-1]+arr[i];
    }

    int ans=0;
    for(int i=2; i<=n; i++){
        for(int j=i-1; j>=1; j--){
            if((prefixSum[i]-prefixSum[j]) % n == 0){
                cout<<prefixSum[i]<<' '<<prefixSum[j]<<endl;
                ans++;
            }
        }
    }

    cout<<ans<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}