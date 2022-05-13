#include <bits/stdc++.h>
using namespace std;

int main(){
	//输入并存储两个string 
	string a,b;
	cout<<"cin>>a:";
	cin>>a;
	cout<<"a:"<<a<<endl;
	cout<<"cin>>b:";
	cin>>b;
	cout<<"b:"<<b<<endl;
	
	//测试操作符 
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
	
	//测试主要函数
	int lend=d.size();
	cout<<"d.size():"<<lend<<endl;
	char n;
	cout<<"d before add:"<<d<<endl;;
	cout<<"在d尾部添加字符:";
	cin>>n;
	d.push_back(n);
	cout<<"after add:"<<d<<endl;
	string e=d.substr(0, 3).c_str();
	cout<<"截取d从第0位开始最多3个字符构成的字符串e:"<<e<<endl;
	int tpi;
	cout<<"在d的i处插入一个a；i:";
	cin>>tpi;
	d.insert(tpi,a);
	cout<<"插入后:"<<d<<endl;
	e.replace(e.begin(),e.end(),"s");
	cout<<"将e中所有字符替换为一个s,e="<<e<<endl;
	
	//程序结束 
	cout<<"programme completed!"<<endl;
	return 0;
}
