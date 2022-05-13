#include <bits/stdc++.h>
using namespace std;

class Point{
	public:
		Point(){
			x=0;
			y=0;
		}
		Point(float xx,float yy){
			x=xx;
			y=yy;
		}
		void setX(int xx){
			x=xx;
		}
		void setY(int yy){
			y=yy;
		}
		void getX(){
			cout<<"x:"<<x<<endl;
		}
		void getY(){
			cout<<"y:"<<y<<endl;
		}
		void showP(){
			cout<<"x:"<<x<<" y:"<<y<<endl;
		}
		float calculate_distance(Point &p1){
			float ansx,ansy;
			ansx=x+p1.x;
			ansy=y+p1.y;
			float ans;
			ans=sqrt(ansx*ansx+ansy*ansy);
			cout<<"Á½µã¼ä¾àÀë:"<<ans<<endl;
		}
	private:
		float x,y;
};

int main(){
	int xx,yy;
	cout<<"p.x:";cin>>xx;
	cout<<"p.y:";cin>>yy;
	Point o;
	Point p(xx,yy);
	p.showP();
	cout<<"o.x:";cin>>xx;
	cout<<"o.y:";cin>>yy;
	o.setX(xx);
	o.setY(yy);
	o.showP();
	p.calculate_distance(o);
	cout<<"Completed"<<endl;
	return 0;
}
