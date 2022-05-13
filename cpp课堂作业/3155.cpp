

/*思考题:基于上面的Complex类，有如下main函数能否通过运行，有那些是错误的，为什么?

int main()

{

Complex a,b;            能运行

Complex c=a+b;          不能运行,因为+运算符重载的原因,可以重载 + 运算符使其可以进行复数的相加运算

Complex d=a;            能运行

Complex e;              能运行

e=a;                    能运行

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
        //重载运算符
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
	cout<<"请输入第一个复数的实部:";
	cin>>tpreal;
	cout<<"请输入第一个复数的虚部:";
	cin>>tpimaginary; 
	a.setComplex(tpreal,tpimaginary);
	cout<<"请输入第二个复数的实部:";
	cin>>tpreal;
	cout<<"请输入第二个复数的虚部:";
	cin>>tpimaginary; 
	Complex b(tpreal,tpimaginary);
    Complex c(a);
	cout<<"---------------------------"<<endl;
	cout<<"第一个复数,";
	a.outputComplex();
	cout<<"第二个复数,";
	b.outputComplex();
    cout<<"第三个复数,";
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