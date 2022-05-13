#include "Ganyu.h"
using namespace GANYU;

int main(){
	  Ganyu Yeyang;
    const Ganyu Wangxiaomei(106327);
    int tp;
    cin>>tp;
    Yeyang.setGanyu(tp);
    Yeyang.showX();
    Wangxiaomei.showX();
    Ganyu::showCnt();
    Ganyu ganyu(Yeyang);
    ganyu.showX();
    int sum=add(Yeyang,ganyu);
    cout<<"sum="<<sum<<endl;
    cout<<"test text>"<<endl;
    testUsed();
    testUsed2();
    cout<<"<test text|"<<endl;
    Ganyu::dfs(1,3,{0,1,2,3});
    cout<<"\\/test\\/"<<endl;
    int step=1,N=3;
    vector<int> NUMBER={0,1,2,3};
    dfs(step,N,NUMBER);
    return 0;
}
