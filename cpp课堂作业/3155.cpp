

/*˼����:���������Complex�࣬������main�����ܷ�ͨ�����У�����Щ�Ǵ���ģ�Ϊʲô?

int main()

{

Complex a,b;            ������

Complex c=a+b;          ��������,��Ϊ+��������ص�ԭ��,�������� + �����ʹ����Խ��и������������

Complex d=a;            ������

Complex e;              ������

e=a;                    ������

return 0;

}*/

#include <bits/stdc++.h>
using namespace std;

class Complex{
	public:
		Complex();
        Complex(float tpreal,float tpimaginary){
            real=tpreal;
            imaginary=tpimaginary;
        }
        Complex(const Complex &t){
            real=t.real;
            imaginary=t.imaginary;
        }
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
        //���������
        Complex operator+(Complex &c){
            Complex temp;
            temp.real=real+c.real;
            temp.imaginary=imaginary+c.imaginary;
            return temp;
        }
	private:
		float real,imaginary;
};

int main(){
	float tpreal,tpimaginary;
	Complex a;
	cout<<"�������һ��������ʵ��:";
	cin>>tpreal;
	cout<<"�������һ���������鲿:";
	cin>>tpimaginary; 
	a.setComplex(tpreal,tpimaginary);
	cout<<"������ڶ���������ʵ��:";
	cin>>tpreal;
	cout<<"������ڶ����������鲿:";
	cin>>tpimaginary; 
	Complex b(tpreal,tpimaginary);
    Complex c(a);
	cout<<"---------------------------"<<endl;
	cout<<"��һ������,";
	a.outputComplex();
	cout<<"�ڶ�������,";
	b.outputComplex();
    cout<<"����������,";
    c.outputComplex();
	a.addComplex(b);
	a.isEqual(b);
    c=a;
    c.outputComplex();
    Complex d=a+b;
    d.outputComplex();
	cout<<"Completed"<<endl;
	return 0;
}