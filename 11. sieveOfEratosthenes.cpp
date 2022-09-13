#include "bits/stdc++.h"
using namespace std;
#define int long long

// Sieve of Eratosthenes is a algorithm to print the prime numbers in the given range.

// Time Complexity: O( N*log(logN) ) ~= O(N)

void approchBySir(){
    int n, m; cin>>n>>m;
    
    int arr[1000] = {0};

    arr[2] = 1;

    for(int i=3; i<=m; i+=2){
        arr[i] = 1;
    }

    for(int i=3; i*i<=m; i+=2){
        for(int j=i*i; j<=m; j=j+i*2){
            arr[j] = 0;
        }
    }

    for(int i=n; i<=m; i++){
        if(arr[i]){
            cout<<i<<' ';
        }
    }cout<<endl;

}

void solve(){

    int n, m; cin>>n>>m;

    int prime[100] = {0};

    prime[1]=false;

    for(int i=2; i*i<=m; i++){
        if(prime[i]==0){
            for(int j=i*i; j<=m; j+=i){
                prime[j] = 1;
            }
        }
    }

    for(int i=n; i<=m; i++){
        if(prime[i]==0){
            cout<<i<<' ';
        }
    }cout<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
        approchBySir();
    }
    return 0;
}