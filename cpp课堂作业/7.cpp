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
    Employee employee("����������","�����ýֵ�","�����ó���","������ʡ��","�������ʱ�",date);
    employee.showEmployee();
    cout<<"����Ա����Ϣ"<<endl;
    cout<<"1.����Ա������"<<endl;
    cout<<"2.����Ա����ַ"<<endl;
    cout<<"3.����Ա������"<<endl;
    cout<<"4.����Ա��ʡ��"<<endl;
    cout<<"5.����Ա���ʱ�"<<endl;
    cout<<"6.����Ա����ְ����"<<endl;
    cout<<"7.��ʾԱ����Ϣ"<<endl;
    cout<<"8.�˳�"<<endl;
    int choice;
    while(1){
        cout<<"����������ѡ��";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"������Ա��������";
                string tpname;
                cin>>tpname;
                employee.setEmployeeName(tpname);
                break;
            }
            case 2:{
                cout<<"������Ա����ַ��";
                string tpstreet;
                cin>>tpstreet;
                employee.setEmployeeStreet(tpstreet);
                break;
            }
            case 3:{
                cout<<"������Ա�����У�";
                string tpcity;
                cin>>tpcity;
                employee.setEmployeeCity(tpcity);
                break;
            }
            case 4:{
                cout<<"������Ա��ʡ�ݣ�";
                string tpprovince;
                cin>>tpprovince;
                employee.setEmployeeProvince(tpprovince);
                break;
            }
            case 5:{
                cout<<"������Ա���ʱࣺ";
                string tppostalcode;
                cin>>tppostalcode;
                employee.setEmployeePostalCode(tppostalcode);
                break;
            }
            case 6:{
                cout<<"������Ա����ְ���ڣ�"<<endl;
                int tpyear,tpmonth,tpday;
                cout<<"��������ݣ�";
                cin>>tpyear;
                cout<<"�������·ݣ�";
                cin>>tpmonth;
                cout<<"���������ڣ�";
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

