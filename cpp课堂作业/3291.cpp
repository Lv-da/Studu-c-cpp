#include <bits/stdc++.h>
using namespace std;

class Cat{
    public:
    	Cat(){
    		numOfCats++;
    	}
    	~Cat(){
    		numOfCats--;
    	}
        static void getNumOfCats(){
            cout<<"NumOfCats is:"<<numOfCats<<endl;
        }
        void setC(int tpc){
            c=tpc;
        }
        void getC(){
            cout<<"C:"<<c<<endl;
        }
    private:
        static int numOfCats;
        int c;
};

int Cat::numOfCats=0; 

int main(){
    Cat a;
    a.setC(1);
    Cat::getNumOfCats();
    Cat b;
    b.setC(2);
    Cat::getNumOfCats();
}
