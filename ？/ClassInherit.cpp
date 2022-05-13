#include <bits/stdc++.h>
using namespace std;

class data0{
public:
    int x;
    data0(){
        x=0;
    }
    data0(int x){
        this->x=x;
    }
    void setdata(int x){
        this->x=x;
    }
    int getdata(){
        return x;
    }
    void showdata0(){
        cout<<"this is in data0"<<endl;
    }
};
//类的继承: 基类和派生类都有一个成员函数，但是基类的成员函数不能被派生类的成员函数覆盖
//新的问题出现时原有程序无法（不能完全）解决时，需要对原有程序进行改造，以解决问题
class data1:public data0{
public:
    int y;
    data1(){
        y=0;
    }
    data1(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setdata(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getdata(){
        return x;
    }
    void showdata1(){
        cout<<"this is in data1"<<endl;
    }
};
//派生类包含基类中除了构造和析构函数外的全部成员

class data1_1:public data1{
public:
    int y;
    data1_1(){
        y=0;
    }
    data1_1(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setdata(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getdata(){
        return x;
    }
    void showdata1_1(){
        cout<<"this is in data1_1"<<endl;
    }
};

class data2:protected data1{
public:
    int z;
    data2(){
        z=0;
    }
    data2(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void setdata(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    int getdata(){
        return x;
    }
    void showdata2(){
        cout<<"this is in data2"<<endl;
    }
};

class data3:private data2{
public:
    int w;
    data3(){
        w=0;
    }
    data3(int x,int y,int z,int w){
        this->x=x;
        this->y=y;
        this->z=z;
        this->w=w;
    }
    void setdata(int x,int y,int z,int w){
        this->x=x;
        this->y=y;
        this->z=z;
        this->w=w;
    }
    int getdata(){
        return x;
    }
    void showdata3(){
        cout<<"this is in data3"<<endl;
    }
    void showdata0(){
        data0::showdata0();
    }
};

class data1_2:public data1_1{
public:
    int y;
    data1_2(){
        y=0;
    }
    data1_2(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setdata(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getdata(){
        return x;
    }
    void showdata1_2(){
        cout<<"this is in data1_2"<<endl;
    }
};

int main(){
    data1 test;
    test.setdata(1,2);
    test.showdata0();
    test.showdata1();
    data2 test2;
    test2.setdata(1,2,3);
    test2.showdata2();
    data3 test3;
    test3.setdata(1,2,3,4);
    test3.showdata3();
    test3.showdata0();
    data1_1 test1_1;
    test1_1.setdata(1,2);
    test1_1.showdata0();
    data1_2 test1_2;
    test1_2.setdata(1,2);
    test1_2.showdata0();
    return 0;
}