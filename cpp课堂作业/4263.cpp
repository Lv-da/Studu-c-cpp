#include <bits/stdc++.h>
using namespace std;

class vehicle{
public:
	vehicle(){
		wheels=0;
		weight=0;
		cout<<"create new vehicle"<<endl;
	}
	vehicle(int x=0,int y=0){
		wheels=x;
		weight=y;
		cout<<"create new vehicle"<<endl;
	}
	vehicle(vehicle &v){
		wheels=v.wheels;
		weight=v.weight;
		cout<<"create new vehicle"<<endl;
	}
	void setVehicle(int x,int y){
		wheels=x;
		weight=y;
		cout<<"set vehicle"<<endl;
	}
	int getWheels(){
		return wheels;
	}
	int getWeight(){
		return weight;
	}
private:
	int wheels,weight;
};

class car:public vehicle{
public:
	car():vehicle(0,0){
		passenger_load=0;
		cout<<"create new car"<<endl;
	}
	car(int x,int y,int z):vehicle(x,y){
		passenger_load=z;
		cout<<"create new car"<<endl;
	}
	void setCar(int x,int y,int z){
		setVehicle(x,y);
		passenger_load=z;
		cout<<"set car"<<endl;
	}
	void showCar(){
		cout<<"wheels="<<getWheels()<<endl;
		cout<<"weight="<<getWeight()<<endl;
		cout<<"passenger_load="<<passenger_load<<endl;
	}
private:
	int passenger_load;
};

class truck:public vehicle{
public:
	truck():vehicle(0,0){
		passenger_load=0;
		payload=0;
		cout<<"create new truck"<<endl;
	}
	truck(int a,int b,int c,int d):vehicle(a,b){
		passenger_load=c;
		payload=d;
		cout<<"create new truck"<<endl;
	}
	void setTruck(int a,int b,int c,int d){
		setVehicle(a,b);
		passenger_load=c;
		payload=d;
		cout<<"set truck"<<endl;
	}
	void showTruck(){
		cout<<"wheels="<<getWheels()<<endl;
		cout<<"weight="<<getWeight()<<endl;
		cout<<"passenger_load="<<passenger_load<<endl;
		cout<<"payload="<<payload<<endl;
	}
private:
	int passenger_load,payload;
};

int main(){
	car a;
	truck b;
	a.setCar(4,10,5);
	a.showCar();
	b.setTruck(8,20,2,10);
	b.showTruck();
	cout<<"completed!"<<endl;
	return 0;
}
