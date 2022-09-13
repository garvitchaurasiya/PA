#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    
*/

void printSubsequeces(string s, int n, vector<string> &subs){

    if(n==0){
        return;
    }

    printSubsequeces(s.substr(1), n-1, subs);

    int size = subs.size();
    for(int i=0; i<size; i++){
        subs.push_back(s[0]+subs[i]);
    }

}

void solve(){

    string s; cin>>s;
    int n = s.size();
    vector<string> v;
    v.push_back("\0");

    printSubsequeces(s, n, v);

    for(int i=0 ;i<v.size(); i++){
        cout<<"'"<<v[i]<<"'"<<endl;
    }

}

signed main(){
    int test; cin>>test;

    while(test--)
        solve();

    return 0;
}