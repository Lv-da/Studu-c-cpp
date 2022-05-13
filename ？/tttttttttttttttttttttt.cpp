#include <bits/stdc++.h>
using namespace std;

/*����һ������Point������x�����y���꣨int����
����һ��CRect�࣬����һ�����Σ�
Ҫ��CRect�����д�����ε����Ͻ����꣨x1,y1�������½����꣨x2,y2������Ķ���
Ҫ��CRect������������Ա����RectHeight()��RectWidth()��ͨ�������������ܵõ����εĸߺͿ�;
���⻹��Ҫ����˾�������ĳ�Ա������
Ҫ��ÿ�����������������Ϲ��캯��,��main�����в������ŵ�ÿһ����Ա������ע:ֻ���������ߺͺ����ᴹֱƽ�еľ��Ρ�*/

class Point{
    public:
        Point();
        Point(int tpx,int tpy){
            x=tpx;
            y=tpy;
        }
        void setPoint(int tpx,int tpy){
            x=tpx;
            y=tpy;
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
    cout<<"height:"<<p2.y-p1.y<<endl;
}

void CRect::RectWidth(){
    cout<<"width:"<<p2.x-p1.x<<endl;
}

void CRect::RectArea(){
    cout<<"area:"<<(p2.x-p1.x)*(p2.y-p1.y)<<endl;
}

int main(){
    Point p1(1,2),p2(3,4);
    CRect r1(p1,p2);
    r1.RectHeight();
    r1.RectWidth();
    r1.RectArea();
    cout<<"Completed!"<<endl;
    return 0;
}

