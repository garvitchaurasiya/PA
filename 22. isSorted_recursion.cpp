#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    Check if array is sorted using recursion.
*/
bool isSorted(int arr[], int n){

    if(n==0){
        return true;
    }
    if( arr[n] >= arr[n-1] && isSorted(arr, n-1)){
        return true;
    }
    return false;

}

void printDecOrder(int n){
    if(n==0){
        return;
    }
    cout<<n<<' ';
    printDecOrder(n-1);
}

signed main(){

    int arr[] = {3, 6, 9, 10, 11, 99};
    // cout<<isSorted(arr, 5);

    printDecOrder(5);
    
    return 0;
}