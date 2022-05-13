#include <bits/stdc++.h>
using namespace std;

class student{
	public:
		student(string tpn,int tpr){
			name=tpn;
			rank=tpr;
		}
		friend int compare(const student &tp1,const student &tp2,int i1,int i2);
		friend int compareMin(const student &tp1,const student &tp2,int i1,int i2);
		void setStu(string tpn,int tpr){
			name=tpn;
			rank=tpr;
		}
		string getN(){
			return name;
		}
	private:
		string name;
		int rank;
};

int compare(const student &tp1,const student &tp2,int i1,int i2){
	return tp1.rank>tp2.rank?i1:i2;
}
int compareMin(const student &tp1,const student &tp2,int i1,int i2){
	return tp1.rank<tp2.rank?i1:i2;
}

int main(){
	student stu[3]={student("zhangsan",100),student("lisi",90),student("wangwu",80)};
	int max,min;
	for(int i=0;i<3;i++){
		if(i==0){
			max=0;
		}
		else{
			max=compare(stu[i],stu[max],i,max);
		}
	}
	for(int i=0;i<3;i++){
		if(i==0){
			min=0;
		}
		else{
			min=compareMin(stu[i],stu[min],i,min);
		}
	}
	
	cout<<"top is:"<<stu[max].getN()<<endl;
	cout<<"buttom is:"<<stu[min].getN()<<endl;
	return 0;
}
