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

vector<Point> vp;//储存点 
double f[10][10]={0};//储存线段长度 
double ans=0;//储存当前最小生成树 
int cnt=0;//判断是否到返回条件 
int vis[10]={0};//判断当前点是否被使用 
double sum;//当前被已计算的线段长度 

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
	//输入 
	for(int i=0;i<5;i++){
		cout<<"输入点坐标:";
		cin>>x>>y;
		Point p;
		p.setXY(x,y); 
		vp.push_back(p);
	}	
	//计算线段长度
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
	//寻找最小生成树
	for(int i=0;i<5;i++){
		vis[i]++;
		dfs(i);
		vis[i]--;
	}
	cout<<"最小生成树长度为:"<<ans<<endl;
	return 0;
}
