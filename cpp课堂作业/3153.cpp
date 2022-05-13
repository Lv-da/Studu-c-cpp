#include <bits/stdc++.h>
using namespace std;

class bookList;
vector<bookList> theBookList;

class bookList{
	public:
		void setBook(string tpID,string tpBookname,string tpAuthor,string tpPublisher){
			ID=tpID;
			Bookname=tpBookname;
			Author=tpAuthor;
			Publisher=tpPublisher;
		}
		void showBook(){
			cout<<"书本ID:"<<ID<<"|";
			cout<<"书名:"<<Bookname<<"|";
			cout<<"作者:"<<Author<<"|";
			cout<<"出版社:"<<Publisher<<endl;
		}
	private:
		string ID;
		string Bookname;
		string Author;
		string Publisher;
};

void deleteBook(){
	int i;
	cout<<"输入当前列表要删除第几本书:" ;
	cin>>i;
	if(i>0){
		theBookList.erase(theBookList.begin()+i-1);
	}
	int len=theBookList.size();
	cout<<"删除后的书本列表为:"<<endl;
	for(int i=0;i<len;i++){
		theBookList[i].showBook();
	}
}

int main(){
	string tpID,tpBookname,tpAuthor,tpPublisher;
	int flag=1;
	while(flag!=-1){
		cout<<"ID:";cin>>tpID;
		cout<<"Bookname:";cin>>tpBookname;
		cout<<"Author:";cin>>tpAuthor;
		cout<<"Publisher:";cin>>tpPublisher;
		bookList tpBooklist;
		tpBooklist.setBook(tpID,tpBookname,tpAuthor,tpPublisher);
		theBookList.push_back(tpBooklist);
		cout<<"输入-1退出，否则继续输入书本信息";
		cin>>flag;
	}
	int len=theBookList.size();
	for(int i=0;i<len;i++){
		theBookList[i].showBook();
	}
	flag=1;
	while(flag!=-1){
		cout<<"输入-1退出，否则删除书本信息";
		cin>>flag;
		if(flag!=-1){
			deleteBook();
		}
	}
	cout<<"Completed"<<endl;
	return 0;
}
