#ifndef _GANYU_H
#define _GANYU_H
#include <bits/stdc++.h>
#include "Ganyu.cpp"
using namespace std;

int N_cnt;
int vis[100005];
int ARRAY[100005];//array
//int NUMBER[1050];
//int k=0;

class Ganyu{
	public:
		Ganyu(){
			x=0;cnt++;
			for(int i=1;i<=500000;i++){
				vis[i]=false;
			}
		}
		Ganyu(int tpx){
			x=tpx;cnt++;
			for(int i=1;i<=500000;i++){
				vis[i]=false;
			}
		}
		Ganyu(Ganyu &tp){
			x=tp.x;
			cnt++;
			for(int i=1;i<=500000;i++){
				vis[i]=false;
			}
		}
		void setGanyu(int tpx){
			x=tpx;
		}
		static int getCnt(){
			return cnt;
		}
		friend int add(Ganyu &a,Ganyu &b);
		void showX(){
			cout<<x<<endl;
		}
		void showX() const{
			cout<<x<<endl;
		}
		static void showCnt(){
			cout<<"cnt is:"<<cnt<<endl;
		}
		static void dfs(int step,int N,const vector<int> &NUMBER){
			N_cnt=N;
			if(step==N_cnt+1/*&&k<3*/){
				for(int i=1;i<=N_cnt;i++){
					cout<<ARRAY[i]<<" ";//print
				}
				cout<<endl;
				/*k++;*///k为满足特殊要求：只求前k种组合
				return;
			}
			for(int i=1;i<=N_cnt;i++){
				if(!vis[i]){
					vis[i]=true;
					ARRAY[step]=NUMBER[i];
					dfs(step+1,N_cnt,NUMBER);
					vis[i]=false;
				}
			}
			return;
		}
	private:
		int x;
		static int cnt;
};
int Ganyu::cnt=0;
int add(Ganyu &a,Ganyu &b){
	return a.x+b.x;
}
namespace GANYU{
	void dfs(int step,int N,const vector<int> &NUMBER){
		Ganyu::dfs(step,N,NUMBER);
	}
	void testUsed();
	void testUsed2();
}
#endif
