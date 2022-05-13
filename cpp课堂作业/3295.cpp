#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			if(s[i]+4<='z'&&s[i]+4>='a'||s[i]+4<='Z'&&s[i]+4>='A'){
				s[i]+=4;
			}else{
				s[i]=s[i]-22;
			}
		}
	}
	cout<<s;
	return 0;
}
