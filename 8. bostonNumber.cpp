#include "bits/stdc++.h"
using namespace std;
#define int long long

int sumofdigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve(){

    int n; cin>>n;

    int sumFactorSum = 0;
    int temp = n;
    while(n%2==0){
        sumFactorSum += 2;
        n = n/2;
    }
    for(int i=3; i*i<temp; i+=2){

        while(n%i==0){
            sumFactorSum += sumofdigit(i);
            n = n/i;
        }

    }
    if(n>1){
        sumFactorSum += sumofdigit(n);
    }

    cout<<sumofdigit(temp)<<' '<<sumFactorSum<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}