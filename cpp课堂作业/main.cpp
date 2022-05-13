#include <bits/stdc++.h>
//#include "Point.h"
#include "Line.h"
using namespace std;

int main(){
    Point p1(0,0),p2(0,1);
    Point p3(0,0),p4(1,0);
    Line l1(p1,p2),l2(p3,p4);
    l1.showLine();
    l2.showLine();
    cout<<"Angle:"<<angle(l1,l2)<<endl;
    return 0;
}