#include <bits/stdc++.h>
using namespace std;

class Complex{
	public:
		void setComplex(float tpreal,float tpimaginary){
			real=tpreal;
			imaginary=tpimaginary;
		}
		void outputComplex(){
			cout<<"�ø���Ϊ:"<<real<<"+"<<imaginary<<"i"<<endl; 
		}
		void addComplex(Complex &c){
			real=real+c.real;
			imaginary=imaginary+c.imaginary;
			cout<<"��Ӻ�ĸ���Ϊ:"<<real<<"+"<<imaginary<<"i"<<endl;
			real=real-c.real;
			imaginary=imaginary-c.imaginary;
		}
		void isEqual(Complex &c){
			if(real==c.real&&imaginary==c.imaginary){
				cout<<"�������������"<<endl;
			}else{
				cout<<"���������������"<<endl;
			}
		}
	private:
		float real,imaginary;
};

int main(){
	float tpreal,tpimaginary;
	Complex a,b;
	cout<<"�������һ��������ʵ��:";
	cin>>tpreal;
	cout<<"�������һ���������鲿:";
	cin>>tpimaginary; 
	a.setComplex(tpreal,tpimaginary);
	cout<<"������ڶ���������ʵ��:";
	cin>>tpreal;
	cout<<"������ڶ����������鲿:";
	cin>>tpimaginary; 
	b.setComplex(tpreal,tpimaginary);
	cout<<"---------------------------"<<endl;
	cout<<"��һ������,";
	a.outputComplex();
	cout<<"�ڶ�������,";
	b.outputComplex();
	a.addComplex(b);
	a.isEqual(b);
	cout<<"Completed"<<endl;
	return 0;
}
