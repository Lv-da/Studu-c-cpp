#include <bits/stdc++.h>
using namespace std;

class Student{
	public:
		void setStudent(string nName,string nNumber,int nage){
			Number=nNumber;
			Name=nName;
			age=nage;
		}
		void showStudent(){
			cout<<"ѧ��:"<<Number<<endl;
			cout<<"����:"<<Name<<endl;
			cout<<"����:"<<age<<endl;
		}
	private:
		string Number;
		string Name;
		int age;
		
};

int main(){
	int tpage;
	string tpName,tpNumber;
	cout<<"������ѧ��:";
	cin>>tpNumber;
	cout<<"����������:";
	cin>>tpName;
	cout<<"����������:";
	cin>>tpage;
	Student stuDent;
	stuDent.setStudent(tpName,tpNumber,tpage);
	stuDent.showStudent();
	cout<<"Completed"<<endl;
	return 0;
}
