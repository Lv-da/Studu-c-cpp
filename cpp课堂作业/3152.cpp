#include <bits/stdc++.h>
using namespace std;

class Complex{
	public:
		void setComplex(float tpreal,float tpimaginary){
			real=tpreal;
			imaginary=tpimaginary;
		}
		void outputComplex(){
			cout<<"该复数为:"<<real<<"+"<<imaginary<<"i"<<endl; 
		}
		void addComplex(Complex &c){
			real=real+c.real;
			imaginary=imaginary+c.imaginary;
			cout<<"相加后的复数为:"<<real<<"+"<<imaginary<<"i"<<endl;
			real=real-c.real;
			imaginary=imaginary-c.imaginary;
		}
		void isEqual(Complex &c){
			if(real==c.real&&imaginary==c.imaginary){
				cout<<"这两个复数相等"<<endl;
			}else{
				cout<<"这两个复数不相等"<<endl;
			}
		}
	private:
		float real,imaginary;
};

int main(){
	float tpreal,tpimaginary;
	Complex a,b;
	cout<<"请输入第一个复数的实部:";
	cin>>tpreal;
	cout<<"请输入第一个复数的虚部:";
	cin>>tpimaginary; 
	a.setComplex(tpreal,tpimaginary);
	cout<<"请输入第二个复数的实部:";
	cin>>tpreal;
	cout<<"请输入第二个复数的虚部:";
	cin>>tpimaginary; 
	b.setComplex(tpreal,tpimaginary);
	cout<<"---------------------------"<<endl;
	cout<<"第一个复数,";
	a.outputComplex();
	cout<<"第二个复数,";
	b.outputComplex();
	a.addComplex(b);
	a.isEqual(b);
	cout<<"Completed"<<endl;
	return 0;
}
