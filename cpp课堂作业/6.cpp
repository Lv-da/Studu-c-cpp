#include <bits/stdc++.h>
using namespace std;

class myString{
public:
    myString(){
        int len=500005;
        char *str=new char[len+1];
        str[len]='\0';
        // string s;
        // cout<<"Please input a string: ";
        // cin>>s;
        // len=s.size();
        // for(int i=0;i<len;i++){
        //     str[i]=s[i];
        // }
        //this->str=(char*)s.c_str();
    }
    myString(string s){
        this->str=(char*)s.c_str();
    }
    myString(const myString& s){
        this->str=s.str;
    }
    void setStr(string s){
        this->str=(char*)s.c_str();
    }
    void print(){
        cout<<str<<endl;
    }
    void myStrcat(myString s){
        strcat(str,s.str);
    }
private:
    char *str;
};

int main(){
    myString s1;
    myString s2(" world");
    myString s3(s2);
    s1.setStr("hello");
    cout<<"s1 print:"<<endl;
    s1.print();
    cout<<"s2 print:"<<endl;
    s2.print();
    cout<<"s3 print:"<<endl;
    s3.print();
    cout<<"s1+s2:"<<endl;
    s1.myStrcat(s2);
    s1.print();
    return 0;
}