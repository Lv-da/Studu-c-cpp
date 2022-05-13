#include <bits/stdc++.h>
using namespace std;

//错误原因：未定义复制构造函数，导致pointArray2=pointArray1时形成的是浅拷贝，导致程序发生错误; 

class Point{
public:
	Point():x(0),y(0){
		cout<<"Default Constructor called"<<endl;
	}
	Point(int x,int y):x(x),y(y){
		cout<<"Constructor called."<<endl;
	}
	
	//此处为新增部分开始 
	Point(Point &p):x(p.x),y(p.y){}
	//此处为新增部分结束 
	
	~Point(){
		cout<<"Destructor called."<<endl;
	}
	int getX() const{return x;}
	int getY() const{return y;}
	void move(int newX,int newY){
		x=newX;
		y=newY;
	}
private:
	int x,y;
};

class ArrayOfPoints{
public:
	ArrayOfPoints(int size):size(size){
		points=new Point[size];
	}
	
	//此处为新增部分开始 
	ArrayOfPoints(ArrayOfPoints &a){
		size=a.size;
		points=new Point[size];
		for(int i=0;i<size;i++){
			points[i]=a.points[i];
		}
	}
	//此处为新增部分结束 
	
	~ArrayOfPoints(){
		cout<<"Deleting..."<<endl;
		delete[] points;
	}
	Point &element(int index){
		assert(index>=0&&index<size);
		return points[index];
	}
private:
	Point *points;
	int size;
};

int main(){
	int count;
	cout<<"Please enter the count of points:";
	cin>>count;
	ArrayOfPoints pointsArray1(count);
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2=pointsArray1;
	cout<<"Copy of pointsArray1:"<<endl;
	cout<<"Point_0 of array2:"<<pointsArray2.element(0).getX()<<","<<pointsArray2.element(0).getY()<<endl;
	cout<<"Point_1 of array2:"<<pointsArray2.element(1).getX()<<","<<pointsArray2.element(1).getY()<<endl;
	
	pointsArray1.element(0).move(25,30);
	pointsArray1.element(1).move(35,40);
	cout<<"After the moving of pointsArray1:"<<endl;
	cout<<"Point_0 of array2:"<<pointsArray2.element(0).getX()<<","<<pointsArray2.element(0).getY()<<endl;
	cout<<"Point_1 of array2:"<<pointsArray2.element(1).getX()<<","<<pointsArray2.element(1).getY()<<endl;
	
	return 0;
}
