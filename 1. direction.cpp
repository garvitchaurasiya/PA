#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
    
    char d;
    cin.get(d);
    int x=0;
    int y=0;
    while(d!='\n'){
        if(d=='E'){
            x++;
        }
        else if(d=='W'){
            x--;
        }
        else if(d=='N'){
            y++;
        }
        else if(d=='S'){
            y--;
        }

        cin.get(d);
    }
    while(x>0){
        cout<<'E';
        x--;
    }
    while(x<0){
        cout<<'W';
        x++;
    }
    while(y>0){
        cout<<'N';
        y--;
    }
    while(y<0){
        cout<<'S';
        y++;
    }


}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}