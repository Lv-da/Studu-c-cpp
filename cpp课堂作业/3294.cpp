#include <bits/stdc++.h>
using namespace std;

bool prime(int num){
	for(int i=2;i*i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
void gotbaha(int n){
	for(int i=0;i<n;i++){
		if(prime(i)&&prime(n-i)){
			cout<<n<<"="<<i<<"+"<<n-i<<endl;
			return;
		}
	}
}

int main(){
	int n;
	cin>>n;
	gotbaha(n);
	return 0;
}
