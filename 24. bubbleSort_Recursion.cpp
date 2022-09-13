#include "bits/stdc++.h"
using namespace std;
/*
    
*/

void bubbleSortPartial(int arr[], int n, int i){
    if(i==n-1){
        return;
    }

    for(int j=0; j < n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    bubbleSortPartial(arr, n, i+1);

}
void bubbleSortComplete(int arr[], int n, int i, int j){
    if(i==n-1){
        return;
    }
    if(j==n-i-1){
        return;
    }

    if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
    }
    bubbleSortComplete(arr, n, i, j+1);
    bubbleSortComplete(arr, n, i+1, 0);

}

signed main(){

    int arr[] = {12, 45, 5621, 34, 57, 78, 234, 2345};
    int brr[] = {12, 45, 5621, 34, 57, 78, 234, 2345};
    int n = sizeof(arr)/sizeof(int);

    bubbleSortPartial(arr, n, 0);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    bubbleSortComplete(brr, n, 0, 0);

    for(int i=0; i<n; i++){
        cout<<brr[i]<<' ';
    }

    return 0;
}