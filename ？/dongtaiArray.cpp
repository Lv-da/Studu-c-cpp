#include <bits/stdc++.h>
using namespace std;

class Point{
public:
    int x,y;
    Point(int x,int y):x(x),y(y){}
    Point(){}
    int getX(){
        return x;
    }
    void setPointer(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getY(){
        return y;
    }
};

class ArrayOfPoints{
public:
    ArrayOfPoints(int n){
        points = new Point[n];
    }
    ~ArrayOfPoints(){
        delete [] points;
    }
    Point &element(int index){//&是引用运算符，返回的是一个引用，可以直接对其属性进行修改
        return points[index];//返回指向第index个元素的指针
    }
    Point *points;
};

int main(){
    ArrayOfPoints *p = new ArrayOfPoints(64);
    for(int i = 0; i < 64; i++){
        p->element(i).x = i;
        p->element(i).y = i;
    }
    for(int i = 0; i < 64; i++){
        cout << p->element(i).x << " " << p->element(i).y << endl;
    }
    p->element(0).setPointer(1,2);  
    delete p;
    return 0;
}