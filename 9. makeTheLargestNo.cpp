#include "bits/stdc++.h"
using namespace std;
// #define int long long

int numOfDigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

bool compare(int a, int b){
    int num1 = a * pow(10, numOfDigits(b)) + b;
    int num2 = b * pow(10, numOfDigits(a)) + a;
    return ( num1 > num2 );
}

void solve(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n, compare);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }cout<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}