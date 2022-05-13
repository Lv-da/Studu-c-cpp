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
			cout<<"学号:"<<Number<<endl;
			cout<<"姓名:"<<Name<<endl;
			cout<<"年龄:"<<age<<endl;
		}
	private:
		string Number;
		string Name;
		int age;
		
};

int main(){
	int tpage;
	string tpName,tpNumber;
	cout<<"请输入学号:";
	cin>>tpNumber;
	cout<<"请输入姓名:";
	cin>>tpName;
	cout<<"请输入年龄:";
	cin>>tpage;
	Student stuDent;
	stuDent.setStudent(tpName,tpNumber,tpage);
	stuDent.showStudent();
	cout<<"Completed"<<endl;
	return 0;
}
