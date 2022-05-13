#include <bits/stdc++.h>
using namespace std;

class Point{
public:
    int x;
    int y;
    Point(){
        x=0;
        y=0;
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setPoint(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void showPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

class PointArray{
public:
    int len;
    Point *point;
    PointArray(int len){
        this->len=len;
        point=new Point[len];
    }
    Point &element(int i){
        return point[i];
    }
};

int main(){
    PointArray pa(3);
    pa.element(0).setPoint(1,2);
    pa.element(1).setPoint(3,4);
    pa.element(2).setPoint(5,6);
    for(int i=0;i<pa.len;i++){
        pa.element(i).showPoint();
    }
    return 0;
}