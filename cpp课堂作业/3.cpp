#include <bits/stdc++.h>
using namespace std;

class Car;
class Boat{
	public:
		Boat(double tpw):weight(tpw){}
		friend double getTotalWeight(Boat &b,Car &c);
	private:
		double weight;
};
class Car{
	public:
		Car(double tpw):weight(tpw){}
		friend double getTotalWeight(Boat &b,Car &c);
	private:
		double weight;
};

double getTotalWeight(Boat &b,Car &c){
	return b.weight+c.weight;
}

int main(){
	Boat a(20.5);
	Car b(42.5);
	double sum;
	sum=getTotalWeight(a,b);
	cout<<"sum="<<sum<<endl;
}
