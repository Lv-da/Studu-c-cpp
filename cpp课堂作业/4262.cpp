#include <bits/stdc++.h>
using namespace std;

int main(){
	//���벢�洢����string 
	string a,b;
	cout<<"cin>>a:";
	cin>>a;
	cout<<"a:"<<a<<endl;
	cout<<"cin>>b:";
	cin>>b;
	cout<<"b:"<<b<<endl;
	
	//���Բ����� 
	string c=a;
	cout<<"c=a:"<<c<<"="<<a<<endl;
	string tp;
	if(c==a){
		tp="yes";
	}else{
		tp="no";
	}
	cout<<"c==a?"<<tp<<endl;
	string d=a+b;
	cout<<"d=a+b:"<<a<<"+"<<b<<"="<<d<<endl;
	tp="a==b";
	if(a<b){
		tp="a<b";
	}else if(a>b){
		tp="a>b";
	}
	cout<<"a<b or a>b:"<<tp<<endl;
	cout<<"see all char in string_d:";
	int len=d.size();
	for(int i=0;i<len;i++){
		cout<<d[i]<<",";
	} 
	cout<<endl;
	
	//������Ҫ����
	int lend=d.size();
	cout<<"d.size():"<<lend<<endl;
	char n;
	cout<<"d before add:"<<d<<endl;;
	cout<<"��dβ������ַ�:";
	cin>>n;
	d.push_back(n);
	cout<<"after add:"<<d<<endl;
	string e=d.substr(0, 3).c_str();
	cout<<"��ȡd�ӵ�0λ��ʼ���3���ַ����ɵ��ַ���e:"<<e<<endl;
	int tpi;
	cout<<"��d��i������һ��a��i:";
	cin>>tpi;
	d.insert(tpi,a);
	cout<<"�����:"<<d<<endl;
	e.replace(e.begin(),e.end(),"s");
	cout<<"��e�������ַ��滻Ϊһ��s,e="<<e<<endl;
	
	//������� 
	cout<<"programme completed!"<<endl;
	return 0;
}
