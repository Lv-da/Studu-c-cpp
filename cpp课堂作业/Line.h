//#include "Line.h"
#include <bits/stdc++.h>
#include "Point.h"
using namespace std;

class Line{
    public:
        Line(){
            p1.setPoint(0,0);
            p2.setPoint(0,0);
        }
        Line(Point p1,Point p2):p1(p1),p2(p2){};
        Line(const Line &l):p1(l.p1),p2(l.p2){};
        void setLine(Point &tp1,Point &tp2){
            p1=tp1;
            p2=tp2;
        }
        void showLine(){
            cout<<"("<<p1.getX()<<","<<p1.getY()<<")"<<"("<<p2.getX()<<","<<p2.getY()<<")"<<endl;
            cout<<"Length:"<<sqrt((p1.getX()+p2.getX())*(p1.getX()+p2.getX())+(p1.getY()+p2.getY())*(p1.getY()+p2.getY()))<<endl;
        }
        float getX1(){
            return p1.getX();
        }
        float getY1(){
            return p1.getY();
        }
        float getX2(){
            return p2.getX();
        }
        float getY2(){
            return p2.getY();
        }
        friend float angle(Line &line1, Line &line2);
    private:
        Point p1,p2;
};

float angle(Line &line1, Line &line2){
            float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
            a=line1.getX1();
            b=line1.getY1();
            c=line1.getX2();
            d=line1.getY2();
            e=line2.getX1();
            f=line2.getY1();
            g=line2.getX2();
            h=line2.getY2();
            i=c-a;
            j=d-b;
            k=g-e;
            l=h-f;
            m=i*i+j*j;
            n=k*k+l*l;
            o=i*k+j*l;
            p=o/sqrt(m*n);
            q=acos(p);
            r=q*180/3.1415926;
            return r;
        }