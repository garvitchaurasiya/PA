#include "bits/stdc++.h"
using namespace std;
#define int long long

// NOTE: There is always a null char '\0' at the end of a string. But same is not the case with character array and if we print the char array it could print the garbage value after the characters until it finds the '\0' char eg: abc'@w;0 here abc is the characters to which we initialized and rest are garbase values.

void solve(){

    char arr[3] = {'a', 'b', 'c'};
    cout<<arr<<endl; // We have not set the last char to NULL char i.e. '\0' so this could print garbase value.

    char arr2[4] = {'a', 'b', 'c'};
    cout<<arr2<<endl; // Here the arr[3] = '\0' so this will print abc

    char a[6];
    char b[6];
    cin>>a;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    
    // char brr[5] = "abcde"; // This will give an error size is too long to store in char array of 5 because the size of "abcde" is not 5 there is '\0' in the end so the size is 6;

    char brr[6] = "abcde"; // This will work fine; 

    string s = "abcdef\n";
    cout<<s.size()<<' '<<sizeof(s)<<' '<<s<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}