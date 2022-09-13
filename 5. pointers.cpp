#include "bits/stdc++.h"
using namespace std;

void solve(){

    // int a = 59;
    
    // cout<<a<<endl;

    // cout<<&a<<endl;

    // int &b = a;
    // cout<<b<<endl;

    // int *ptr;
    // ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<sizeof(ptr)<<endl;


    // cout<<ptr<<endl;
    // void* k = ptr;
    // cout<<k<<endl;
    // cout<<*k<<endl; //this gives error void* is not a pointer


    // char ch1 = 'a';
    // cout<<&ch1<<endl;

    // char ch2 = 'b';
    // cout<<&ch2<<endl;

    // char ch3 = 'c';
    // cout<<&ch3<<endl;

    // char ch4 = 'd';
    // cout<<&ch4<<endl;

    // cout<<(int*) &ch4<<endl;
    // cout<<(void*) &ch4<<endl;


    int a = 10;
    int* ptr = &a;

    cout<<ptr<<endl;
    cout<<ptr+1<<endl; // gives next element after 4 byte
    // cout<<*(0x61fed8)<<endl; //Error

    int r = 10;
    int *rptr;
    rptr = &r;
    cout<<rptr<<' '<<*rptr<<endl;
    cout<<2*3.14*(*rptr)<<endl;


}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}