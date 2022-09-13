#include "bits/stdc++.h"
using namespace std;
/*
    
*/

void towerOfHanoi(int n, char source, char helper, char target){
    if(n==0){
        return;
    }

    towerOfHanoi(n-1, source, target, helper);
    cout<<"Move disks "<<n<<" from "<<source<<" to "<<target<<'\n';
    towerOfHanoi(n-1, helper, source, target);

}

signed main(){

    int n=3;

    towerOfHanoi(n, '1', '2', '3');
    return 0;
}