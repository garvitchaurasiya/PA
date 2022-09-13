#include "bits/stdc++.h"
using namespace std;
#define int long long
/*
    Divide the array in N different arrays i.e. only one element is remaining in all N arrays.
    Since all the arrays are sorted merge 

*/

void mergeArrays(int arr[], int n, int s1, int e1, int s2, int e2){
    int i=s1;
    int j=s2;
    int k=s1;
    int merged[100];
    while(i<=e1 && j<=e2){
        if(arr[i] > arr[j]){
            merged[k] = arr[j];
            j++;
        }
        else{
            merged[k] = arr[i];
            i++;
        }
        k++;
    }
    while(i<=e1){
        merged[k] = arr[i];
        i++; k++;
    }
    while(j<=e2){
        merged[k] = arr[j];
        j++; k++;
    }
    for(int z=s1; z<=e2; z++){
        arr[z] = merged[z];
    }
}

void mergeSort(int arr[], int n, int s, int e){

    int mid = (s+e)/2;

    if(s==e){
        return;
    }

    mergeSort(arr, n, s, mid);
    mergeSort(arr, n, mid+1, e);

    mergeArrays(arr, n, s, mid, mid+1, e);

}

void solve(){

    int arr[] = {2, 1, 0, 3, 5, 4};
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr, n, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

}

signed main(){
    int test; cin>>test;
    while(test--){
        solve();
    }
    return 0;
}