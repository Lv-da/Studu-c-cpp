#include <bits/stdc++.h>
using namespace std;

void showtest1(float){
    cout<<"test1"<<endl;
}
void showtest2(float data){
    cout<<"test2:"<<data<<endl;
}

int main(){
    void (*p)(float);
    p=showtest1;
    p(1.0);
    p=showtest2;
    p(1.0);
    return 0;
}