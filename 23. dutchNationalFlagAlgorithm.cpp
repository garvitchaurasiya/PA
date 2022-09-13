#include "bits/stdc++.h"
using namespace std;
/*
    Q: Sort the given array with 3 different elements in O(N) without using frequency array.
    Dutch National Flag Algorithm is only applicable when 3 unique elements are there in array.
*/
signed main(){

    int arr[] = {0, 1, 1, 0, 0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(int);
    
    int l = 0, m = 0, h = n-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[l], arr[m]);
            l++;
        }
        else if(arr[m]==2){
            swap(arr[h], arr[m]);
            h--;
        }
        // Skip when arr[i] == 1
        else{
            m++;
        }
        if(l>m){
            m++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}