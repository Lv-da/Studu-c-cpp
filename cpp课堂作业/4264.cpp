#include <bits/stdc++.h>
using namespace std;
const double PI=3.141592654;

class round{
public:
	double r;
	round(double tpr){
		r=tpr;
	}
	void setR(int x){
		r=x;
	}
	int getR(){
		return r;
	}
};

class ball:public round{
public:
	double s,v;
	ball(double r):round(r){
		s=4*PI*r*r;
		v=(4/3)*PI*r*r*r;
	}
	void showBall(){
		cout<<"s:"<<s<<",v:"<<v<<endl;
	}
};

class column:public round{
public:
	double s,v,h;
	column(double r,double h):round(r),h(h){
		s=PI*r*r*2+2*PI*r*h;
		v=PI*r*r*h;
	}
	void showColumn(){
		cout<<"s:"<<s<<",v:"<<v<<endl;
	}
};

class taper:public round{
public:
	double s,v,h;
	taper(double r,double h):round(r),h(h){
		double L=sqrt(r*r+h*h);
		s=PI*r*r+PI*r*L;
		v=(1/3)*PI*r*r*h;
	}
	void showTaper(){
		cout<<"s:"<<s<<",v:"<<v<<endl;
	}
};

int main(){
	double r;
	cout<<"ÊäÈë°ë¾¶R:";
	cin>>r;
	cout<<"input h:";
	double h;
	cin>>h;
	ball a(r);
	column b(r,h);
	taper c(r,h);
	a.showBall();
	b.showColumn();
	c.showTaper();
	cout<<"completed!"<<endl;
	return 0;
	
}
