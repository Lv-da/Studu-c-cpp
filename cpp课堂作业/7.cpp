#include <bits/stdc++.h>
using namespace std;

class Cdate{
    public:
        Cdate(int tpyear,int tpmonth,int tpday){
            year=tpyear;
            month=tpmonth;
            day=tpday;
        }
        Cdate(const Cdate &d){
            year=d.year;
            month=d.month;
            day=d.day;
        }
        void setDate(int tpyear,int tpmonth,int tpday){
            year=tpyear;
            month=tpmonth;
            day=tpday;
        }
        void showDate(){
            cout<<year<<"-"<<month<<"-"<<day<<endl;
        }
    private:
        int year,month,day;
};

class Employee{
    public:
        Employee(string tpname,string tpstreet,string tpcity,string tpprovince,string tppostalcode,Cdate tpdate);
        Employee(const Employee &e);
        void setEmployeeName(string tpname){
            name=tpname;
        }
        void setEmployeeStreet(string tpstreet){
            street=tpstreet;
        }
        void setEmployeeCity(string tpcity){
            city=tpcity;
        }
        void setEmployeeProvince(string tpprovince){
            province=tpprovince;
        }
        void setEmployeePostalCode(string tppostalcode){
            postalcode=tppostalcode;
        }
        void setEmployeeDate(Cdate tpdate){
            date=tpdate;
        }
        void showEmployee(){
            cout<<"name:"<<name<<endl;
            cout<<"street:"<<street<<endl;
            cout<<"city:"<<city<<endl;
            cout<<"province:"<<province<<endl;
            cout<<"postalcode:"<<postalcode<<endl;
            date.showDate();
        }
    private:
        string name,street,city,province,postalcode;
        Cdate date;
};

Employee::Employee(string tpname,string tpstreet,string tpcity,string tpprovince,string tppostalcode,Cdate tpdate):name(tpname),street(tpstreet),city(tpcity),province(tpprovince),postalcode(tppostalcode),date(tpdate){
    cout<<"1"<<endl;
}

Employee::Employee(const Employee &e):name(e.name),street(e.street),city(e.city),province(e.province),postalcode(e.postalcode),date(e.date){
    cout<<"2"<<endl;
}

int main(){
    Cdate date(2000,1,1);
    Employee employee("请设置姓名","请设置街道","请设置城市","请设置省份","请设置邮编",date);
    employee.showEmployee();
    cout<<"设置员工信息"<<endl;
    cout<<"1.设置员工姓名"<<endl;
    cout<<"2.设置员工地址"<<endl;
    cout<<"3.设置员工城市"<<endl;
    cout<<"4.设置员工省份"<<endl;
    cout<<"5.设置员工邮编"<<endl;
    cout<<"6.设置员工入职日期"<<endl;
    cout<<"7.显示员工信息"<<endl;
    cout<<"8.退出"<<endl;
    int choice;
    while(1){
        cout<<"请输入您的选择：";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"请输入员工姓名：";
                string tpname;
                cin>>tpname;
                employee.setEmployeeName(tpname);
                break;
            }
            case 2:{
                cout<<"请输入员工地址：";
                string tpstreet;
                cin>>tpstreet;
                employee.setEmployeeStreet(tpstreet);
                break;
            }
            case 3:{
                cout<<"请输入员工城市：";
                string tpcity;
                cin>>tpcity;
                employee.setEmployeeCity(tpcity);
                break;
            }
            case 4:{
                cout<<"请输入员工省份：";
                string tpprovince;
                cin>>tpprovince;
                employee.setEmployeeProvince(tpprovince);
                break;
            }
            case 5:{
                cout<<"请输入员工邮编：";
                string tppostalcode;
                cin>>tppostalcode;
                employee.setEmployeePostalCode(tppostalcode);
                break;
            }
            case 6:{
                cout<<"请输入员工入职日期："<<endl;
                int tpyear,tpmonth,tpday;
                cout<<"请输入年份：";
                cin>>tpyear;
                cout<<"请输入月份：";
                cin>>tpmonth;
                cout<<"请输入日期：";
                cin>>tpday;
                Cdate date(tpyear,tpmonth,tpday);
                employee.setEmployeeDate(date);
                break;
            }
            case 7:{
                employee.showEmployee();
                break;
            }
            case 8:
                return 0;
        }
    }
    return 0;
}

