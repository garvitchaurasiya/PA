#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    operators: '&', '|', '^', '<<', '>>'
    
    Xor
        n^0 = n
        n^n = 0

    Left Shift(<<):
        7<<1 means shift the bits by 1 towards left.
        n<<1 -> n*2
        a<<b -> a * pow(2, b)

    Right Shift(>>):
        7>>1 means shift the bits by 1 towards right.
        n>>1 -> n/2
        a>>b -> a / pow(2, b)
    
    Node(~)
        ~1 -> 0
        ~0 -> 1
        ~10 = -11

*/
void solve(){
    // // Find Unique Number.
    // int arr[5] = {1, 2, 1, 3, 3};
    
    // int x = 0;

    // for(int i=0; i<5; i++){
    //     x = (x^arr[i]);
    // }
    // cout<<x<<endl;

    // Print Number of set Bits. 
    // int n; cin>>n;
    // int setBits=0;
    // while(n>0){
    //     setBits += (n&1);
    //     n >>= 1;
    // }

    // cout<<setBits<<endl;

    int n = 5;
    int arr[n] = {1, 1, 2, 2, 3, 3, 11, 7, 12, 12};
    vector<int> whenZero;
    vector<int> whenMask;
    int x = 0;
    for(int i=0; i<n; i++){
        x = x^arr[i];
    }

    // x will store the xor of unique numbers.

    int temp = x;
    int bits = 0;
    while(temp&1){
        if(temp&1){
            break;
        }
        bits++;
        temp = temp>>1;
    }
    cout<<bits<<endl;
    int mask = 1<<bits;
    
    int num1 = 0, num2 = 0;

    for(int i=0; i<n; i++){
        if((arr[i]&mask) == 0){
            num1 = num1^arr[i];
        }
        else if((arr[i]&mask)==mask){
            num2 = num2^arr[i];
        }
    }

    cout<<num1<<' '<<num2<<endl;

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}