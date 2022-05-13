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
};

int main(){
    Point *p = new Point(1,2);
    cout << p->x << " " << p->y << endl;//p->x,p->y相当于p.x,p.y
    cout << p->getX() << " " << p->getY() << endl;//p->getX,p->getY相当于p.getX,p.getY
    delete p;
    return 0;
}