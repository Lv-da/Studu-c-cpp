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
    int getY(){
        return y;
    }
    void setPointer(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setPoint(Point &p){
        this->x=p.x;
        this->y=p.y;
    }
};

int main(){
    Point *p = new Point(1,2);
    cout << p->x << " " << p->y << endl;//p->x,p->y相当于p.x,p.y
    cout << p->getX() << " " << p->getY() << endl;//p->getX,p->getY相当于p.getX,p.getY
    int x,y;
    cin>>x>>y;
    p->setPointer(x,y);
    cout << p->x << " " << p->y << endl;
    delete p;
    return 0;
}