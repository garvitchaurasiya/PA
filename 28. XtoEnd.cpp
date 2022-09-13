#include "bits/stdc++.h"
using namespace std;

string moveX(string s){
	if(s.size()==1){
		return s;
	}
	char cc = s[0];
	string cs = s.substr(1);
	if(cc=='x'){
		return moveX(cs)+cc;
	}else{
		return cc+moveX(cs);
	}
}

int main(){

	string s; cin>>s;
	cout<<moveX(s)<<endl;

	return 0;
}