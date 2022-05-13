#include <bits/stdc++.h>
using namespace std;

class Point{
public:
	double x,y;
	Point(){
		x=0;
		y=0;
 	}
	//Point(int tpx=0,int tpy=0){
//		x=tpx;
//		y=tpy;
//	}
//	Point(Point &p){
//		x=p.x;
//		y=p.y;
//	}
	double getX(){
		return x;
	}
	double getY(){
		return y;
	}
	void setXY(double tpx,double tpy){
		x=tpx;
		y=tpy;
	}
};

vector<Point> vp;//����� 
double f[10][10]={0};//�����߶γ��� 
double ans=0;//���浱ǰ��С������ 
int cnt=0;//�ж��Ƿ񵽷������� 
int vis[10]={0};//�жϵ�ǰ���Ƿ�ʹ�� 
double sum;//��ǰ���Ѽ�����߶γ��� 

void dfs(int i){
	if(cnt>=4){
		ans=ans<sum?ans:sum;
		return;
	}
	for(int j=0;j<5;i++){
		if(vis[j]==0){
			vis[j]++;
			sum+=f[i][j];
			cnt++;
			dfs(j);
			cnt--;
			vis[j]--;
			sum-=f[i][j];
		}
	}
}

int main(){
	double x,y;
	//���� 
	for(int i=0;i<5;i++){
		cout<<"���������:";
		cin>>x>>y;
		Point p;
		p.setXY(x,y); 
		vp.push_back(p);
	}	
	//�����߶γ���
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			double dx=vp[i].getX()-vp[j].getX();
			double dy=vp[i].getY()-vp[j].getY();
			dx=abs(dx);
			dy=abs(dy);
			double len=sqrt(dx*dx+dy*dy);
			f[i][j]=len;
			f[j][i]=len;
			cout<<"len of point "<<i<<" to "<<j<<" is:"<<len<<endl;
		}
	} 
	//Ѱ����С������
	for(int i=0;i<5;i++){
		vis[i]++;
		dfs(i);
		vis[i]--;
	}
	cout<<"��С����������Ϊ:"<<ans<<endl;
	return 0;
}
