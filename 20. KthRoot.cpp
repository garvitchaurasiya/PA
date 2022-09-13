#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/
void solve(){

    int n; cin>>n;
    int k; cin>>k;

    if(k==1){
        cout<<n<<endl;
        return;
    }

    int s = 2;
    int e = sqrt(n);

    while(s<=e){
        int mid = (s+e)/2;

        int prod = pow(mid, k);
        if( prod==n || (pow(mid+1, k) > n && pow(mid, k)<n) ){
            cout<<mid<<endl;
            return;
        }
        else if(prod > n){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    
}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}