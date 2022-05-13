//#include "Point.h"
#include <bits/stdc++.h>
using namespace std;

class Point{
    public:
        Point(){
            x=0;
            y=0;
        }
        Point(float tpx,float tpy){
            x=tpx;
            y=tpy;
        }
        Point(const Point &p):x(p.x),y(p.y){
            x=x;
            y=y;
        }
        void setPoint(float tpx,float tpy){
            x=tpx;
            y=tpy;
        }
        void showPoint(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
    private:
        float x,y;
};