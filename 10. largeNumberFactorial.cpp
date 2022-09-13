#include "bits/stdc++.h"
using namespace std;
#define int long long

void multiply(int ans[], int d){

    int carry = 0;
    for(int i=0; i<5000; i++){
        int product = ans[i]*d+carry;
        carry=0;
        ans[i] = product%10;
        carry = product/10;
    }

}

void solve(){

    int n; cin>>n;
    int ans[5000] = {1};

    for(int i=1; i<=n; i++){
        multiply(ans, i);
    }
    
    int i;
    for(i=4999; i>=0; i--){
        if(ans[i]!=0){
            break;
        }
    }
    cout<<"No of digits "<<i+1<<endl;
    for(; i>=0; i--){
        cout<<ans[i];
    }
    cout<<endl<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}