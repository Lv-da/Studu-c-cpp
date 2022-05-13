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
	cout<<"�����������������꣨���ϣ����£�"<<endl;
	cin>>x1>>y1;
	cin>>x2>>y2;
	Point myp1(x1, y1),myp2(x2, y2);
	CRect creat(myp1, myp2);
	creat.RectHeight();
	creat.RectWidth();
	creat.RectArea();
	return 0;
}

