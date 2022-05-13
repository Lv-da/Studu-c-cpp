#include <bits/stdc++.h>
using namespace std;

#define MAX_MEMBER_CNT 105//最大成员数，可修改
#define MAX_BOOK_CNT 105//最大书籍数，可修改

//初始化功能
void main_menu();//主菜单
void init_member();//初始化成员
void init_book();//初始化书籍
//会员管理功能
int cnt_member = 0;//成员数
struct member{
    string name;
    int id;
    int point;
}mem[MAX_MEMBER_CNT];
void member_menu();//会员管理菜单
void show_member();//显示所有会员
void add_member();//添加会员
void change_member();//修改会员信息
//书籍管理功能
int cnt_book = 0;//书籍数
struct book{
    string name;
    int id;
    int point;
}book[MAX_BOOK_CNT];
void book_menu();//书籍管理菜单
void book_list();//显示所有书籍
void add_book();//添加书籍
void delete_book();//删除书籍
//购物结算功能
void shopping_menu();//购物结算菜单

void ClS(){
    cout<<"输入任意键继续：";//清屏模块,安插到后面函数需要处
    int detect;
    cin>>detect;
    system("cls");
}

int main()
{
    //登录模块，做在main函数里
    {
        string username, password;
        int count;
        bool flag = false;
        cout << "请输入用户名：";
        cin >> username;
        while(!flag){
            cout << "请输入密码：";
            cin >> password;
            if (username=="admin" && password=="123456")
            {
                cout<<"登录成功！"<<endl;
                flag = true;
            }
            else
            {
                cout<<"登录失败！"<<endl;
                cout<< "请重新输入用户名：";
                cin>>username;
                cout<<"请重新输入密码：";
                cin>>password;
                count++;
            }
            if(count>=3)
            {
                cout<<"输入错误次数过多，程序退出！"<<endl;
                return 0;
            }
        }
    }
    init_book();//初始化书籍
    init_member();//初始化会员
    main_menu();//主菜单
    int input;
    while(cin>>input){
        switch(input){
            case 1:member_menu();break;
            case 2:book_menu();break;
            case 3:shopping_menu();break;
            case 4:return 0;
            default:
                cout<<"输入错误！"<<endl;
                break;
        }
        system("cls");
        main_menu();
    }
    return 0;
}

void main_menu()
{
    cout<<"******************************"<<endl;
    cout<<"*      图书销售管理系统      *"<<endl;
    cout<<"*         1.会员管理         *"<<endl;
    cout<<"*         2.书籍管理         *"<<endl;
    cout<<"*         3.购物结算         *"<<endl;
    cout<<"*         4.注销             *"<<endl;
    cout<<"******************************"<<endl;
    cout<<"请选择，输入数字（1-4）：";
}

void member_menu()
{
    begin:
    cout<<"图书销售管理系统>会员管理"<<endl;
    cout<<"**************************"<<endl;
    cout<<"*  1.显示所有会员        *"<<endl;
    cout<<"*  2.添加会员信息        *"<<endl;
    cout<<"*  3.修改会员信息        *"<<endl;
    cout<<"*  4.返回主菜单          *"<<endl;
    cout<<"**************************"<<endl;
    cout<<"请选择，输入数字：";
    int input;
    cin >> input;

    switch(input){
        case 1:
            cout<<"显示所有会员信息"<<endl;
            show_member();
            break;
        case 2:
            cout<<"添加会员信息"<<endl;
            add_member();
            break;
        case 3:
            cout<<"修改会员信息"<<endl;
            change_member();
            break;
        case 4:
            cout<<"返回主菜单"<<endl;
            return;
        default:
            cout<<"输入错误！请重新输入！"<<endl;
    }
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
    system("cls");
    goto begin;
}

void book_menu()
{
    begin:
    cout<<"图书销售管理系统>书籍管理"<<endl;
    cout<<"****************"<<endl;
    cout<<"* 1.查看书目   *"<<endl;
    cout<<"* 2.添加书籍   *"<<endl;
    cout<<"* 3.删除书籍   *"<<endl;
    cout<<"* 4.返回主菜单 *"<<endl;
    cout<<"****************"<<endl;
    cout<<"请选择，输入数字：";
    int input;
    cin >> input;
    switch(input){
        case 1:
            cout<<"查看书目"<<endl;
            book_list();
            break;
        case 2:
            cout<<"添加书籍"<<endl;
            add_book();
            break;
        case 3:
            cout<<"删除书籍"<<endl;
            delete_book();
            break;
        case 4:
            cout<<"返回主菜单"<<endl;
            return;
        default:
            cout<<"输入错误！请重新输入！"<<endl;
    }
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
    system("cls");
    goto begin;

}

void shopping_menu()
{
    system("cls");
    cout<<"图书销售管理系统>购物结算"<<endl;
    book_list();
    int member_id,book_id,buy_cnt;
    cout<<"请输入会员号：";
    cin >> member_id;
    cout<<"请输入要购买的书籍编号：";
    cin >> book_id;
    cout<<"请输入您要购买的数量：";
    cin >> buy_cnt;
    cout<<"你要购买的图书是"<<book[book_id-1].name<<"，数量是"<<buy_cnt<<"，总额是"<<book[book_id-1].point*buy_cnt<<endl;
    cout<<"是否继续？（y/n）:";
    char input;
    cin >> input;
    if(input == 'y'){
        if(mem[member_id-1].point>=book[book_id-1].point*buy_cnt){
            mem[member_id-1].point -= book[book_id-1].point*buy_cnt;
            cout<<"结算成功！"<<endl;
        }else{
            cout<<"结算失败！"<<endl;
        }
    }
    else if(input == 'n'){
        cout<<"结算失败！"<<endl;
    }
    
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
    
}

void show_member()
{
    system("cls");
    cout<<"图书销售管理系统 > 会员信息管理 > 显示会员信息"<<endl;
    cout<<"会员号\t姓名\t积分\t"<<endl;
    for(int i=0;i<cnt_member;i++){
        cout<<mem[i].id<<"\t"<<mem[i].name<<"\t"<<mem[i].point<<"\t"<<endl;
    }
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void add_member()
{
    system("cls");
    cout<<"图书销售管理系统 > 会员信息管理 > 新增会员信息"<<endl;
    mem[cnt_member].id = cnt_member+1;
    cout<<"请输入新会员姓名：";
    cin >> mem[cnt_member].name;
    cout<<"请输入新会员积分：";
    cin >> mem[cnt_member].point;
    cout<<"添加成功！"<<endl;
    cnt_member++;
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void change_member()
{
    system("cls");
    cout<<"图书销售管理系统 > 会员信息管理 > 修改会员信息"<<endl;
    cout<<"请输入要修改的会员号：";
    int id;
    cin >> id;
    for(int i=0;i<cnt_member;i++){
        if(mem[i].id == id){
            cout<<"请输入新的会员姓名：";
            cin >> mem[i].name;
            cout<<"请输入新的会员积分：";
            cin >> mem[i].point;
            cout<<"修改成功！"<<endl;
            return;
        }
    }
    cout<<"修改失败！"<<endl;
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void book_list()
{
    system("cls");
    cout<<"图书销售管理系统 > 书籍管理 > 显示书籍信息"<<endl;
    cout<<"图书号\t图书名\t图书价钱"<<endl;
    for(int i=0;i<cnt_book;i++){
        cout<<book[i].id<<"\t"<<book[i].name<<"\t"<<book[i].point<<endl;
    }
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void add_book()
{
    system("cls");
    cout<<"图书销售管理系统 > 书籍管理 > 新增书籍信息"<<endl;
    book[cnt_book].id = cnt_book+1;
    cout<<"请输入图书名：";
    cin >> book[cnt_book].name;
    cout<<"请输入图书价钱：";
    cin >> book[cnt_book].point;
    cout<<"添加成功！"<<endl;
    cnt_book++;
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void delete_book()
{
    system("cls");
    cout<<"图书销售管理系统 > 书籍管理 > 删除书籍信息"<<endl;
    cout<<"请输入要删除的图书号：";
    int id;
    cin >> id;
    for(int i=0;i<cnt_book;i++){
        if(book[i].id == id){
            for(int j=i;j<cnt_book-1;j++){
                book[j] = book[j+1];
            }
            cout<<"删除成功！"<<endl;
            return;
        }
    }
    cout<<"删除失败！"<<endl;
    cout<<"输入任意键继续：";//清屏模块
    int detect;
    cin>>detect;
}

void init_member()
{
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="张三";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="李四";
    mem[cnt_member].point=600;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="王五";
    mem[cnt_member].point=500;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="陆六";
    mem[cnt_member].point=1000;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="钱七";
    mem[cnt_member].point=900;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="大强";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="小丽";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="敏敏";
    mem[cnt_member].point=100;
    cnt_member++;
}

void init_book()
{
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="C#2.0宝典";
    book[cnt_book].point=88;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="Java编程基础";
    book[cnt_book].point=55;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="J2SE桌面应用程序开发";
    book[cnt_book].point=60;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="数据库设计和应用";
    book[cnt_book].point=45;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="水浒传";
    book[cnt_book].point=55;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="红楼梦";
    book[cnt_book].point=68;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="三国演义";
    book[cnt_book].point=78;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="地心游记";
    book[cnt_book].point=29;
    cnt_book++;
}