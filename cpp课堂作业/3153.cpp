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
			cout<<"�鱾ID:"<<ID<<"|";
			cout<<"����:"<<Bookname<<"|";
			cout<<"����:"<<Author<<"|";
			cout<<"������:"<<Publisher<<endl;
		}
	private:
		string ID;
		string Bookname;
		string Author;
		string Publisher;
};

void deleteBook(){
	int i;
	cout<<"���뵱ǰ�б�Ҫɾ���ڼ�����:" ;
	cin>>i;
	if(i>0){
		theBookList.erase(theBookList.begin()+i-1);
	}
	int len=theBookList.size();
	cout<<"ɾ������鱾�б�Ϊ:"<<endl;
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
		cout<<"����-1�˳���������������鱾��Ϣ";
		cin>>flag;
	}
	int len=theBookList.size();
	for(int i=0;i<len;i++){
		theBookList[i].showBook();
	}
	flag=1;
	while(flag!=-1){
		cout<<"����-1�˳�������ɾ���鱾��Ϣ";
		cin>>flag;
		if(flag!=-1){
			deleteBook();
		}
	}
	cout<<"Completed"<<endl;
	return 0;
}
