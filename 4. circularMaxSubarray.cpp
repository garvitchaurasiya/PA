#include<iostream>
#include<climits>
using namespace std;

void negatearr(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] *= -1;
	}
}

int main(){
    int n; cin>>n;
	int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

	int currSum = 0, maxSum = INT_MIN, totalSum = 0;

	for(int i = 0; i < n; i++){
		currSum += arr[i];
		totalSum += arr[i];
		if(currSum > maxSum){
			maxSum = currSum;
		}
		if(currSum < 0){
			currSum = 0;
		}
	}

	cout<<maxSum<<' '<<totalSum<<endl;

	int res1 = maxSum;

	maxSum = INT_MIN;
	currSum = 0;
	negatearr(arr, n);


	for(int i = 0; i < n; i++){
		currSum += arr[i];
		if(currSum > maxSum){
			maxSum = currSum;
		}
		if(currSum < 0){
			currSum = 0;
		}
	}

	cout<<maxSum<<' '<<totalSum<<endl;

	int res2 = totalSum + maxSum;
	cout<<max(res1, res2)<<endl;

}