#include <bits/stdc++.h>
using namespace std;

/*定义一个点类Point，包括x坐标和y坐标（int）。
定义一个CRect类，代表一个矩形，
要求CRect类中有代表矩形的左上角坐标（x1,y1）和右下角坐标（x2,y2）点类的对象，
要求CRect类中有两个成员函数RectHeight()和RectWidth()，通过这两个函数能得到矩形的高和宽;
此外还需要有求此矩形面积的成员函数。
要求每个类至少有两个以上构造函数,在main函数中测试他门的每一个成员函数。注:只考虑四条边和横纵轴垂直平行的矩形。*/

class Point{
    public:
        Point(int tpx,int tpy){
            x=tpx;
            y=tpy;
        }
        void setPoint(int tpx,int tpy){
            x=tpx;
            y=tpy;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
    private:
        int x,y;
};


class CRect{
    public:
        CRect(Point xp1,Point xp2);
        CRect(const CRect &r);
        void RectHeight();
        void RectWidth();
        void RectArea();
    private:
        Point p1,p2;
        double area;
};

CRect::CRect(Point xp1,Point xp2):p1(xp1),p2(xp2){
    cout<<"1"<<endl;
}

CRect::CRect(const CRect &r):p1(r.p1),p2(r.p2){
    cout<<"2"<<endl;
}

void CRect::RectHeight(){
    cout<<"height:"<<p2.gety()-p1.gety()<<endl;
}

void CRect::RectWidth(){ 
    cout<<"width:"<<p2.getx()-p1.getx()<<endl;
}

void CRect::RectArea(){
    cout<<"area:"<<(p2.getx()-p1.getx())*(p2.gety()-p1.gety())<<endl;
}

int main(void){
	int x1, y1, x2, y2;
	cout<<"请输入矩形两点的坐标（左上，右下）"<<endl;
	cin>>x1>>y1;
	cin>>x2>>y2;
	Point myp1(x1, y1),myp2(x2, y2);
	CRect creat(myp1, myp2);
	creat.RectHeight();
	creat.RectWidth();
	creat.RectArea();
	return 0;
}

