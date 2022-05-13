#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char usr[] = "admin", pwd[] = "123456";//用户名和密码
struct member//用户信息
{
    int no;
    char name[100];
    int point;
} m[1000] = {{1, "张三", 100}, {2, "李四", 600}, {3, "王五", 500}, {4, "陆六", 1000}, {5, "钱七", 900}, {6, "大强", 100}, {7, "小丽", 100}, {8, "心理美", 600}, {9, "张三风", 500}};
struct book//书本信息
{
    int no;
    char name[100];
    int price;
} b[1000] = {{1, "C#2.0宝典", 88}, {2, "Java编程基础", 55}, {3, "J2SE桌面应用程序开发", 60}, {4, "数据库设计和应用", 45}, {5, "水浒传", 55}, {6, "红楼梦", 68}, {7, "三国演义", 78}, {8, "地心游记", 29}};
void print_login();//登录界面
void login();//登录
void login_check(int t);//登录检查
void main_list();//主界面
void member_list();//会员列表
void list_member();//会员列表
void creat_member();//创建会员
void change_member();//修改会员信息
void book_list();//书本列表
void list_books();//书本列表
void creat_book();//创建书本
void delete_book();//删除书本
void buy();//购买
int main(void)//主函数
{
    login();//登录
    return 0;
}
void print_login()
{
    printf("***********************\n");
    printf("*   图书销售管理系统  *\n");
    printf("*      1.登录系统     *\n");
    printf("*      2.退出         *\n");
    printf("***********************\n");
    printf("请选择，输入数字:(1-2)");
}
void login()
{
    print_login();
    int in;
    scanf("%d", &in);
    if (in == 1)
        login_check(3);//登录检查
    else if (in == 2)
    {
        printf("欢迎再次使用本系统!\n");
        getchar();
        getchar();
        return;
    }
    else
    {
        printf("输入错误，请重新输入.\n");
        login();
    }
}
void login_check(int t)
{
    char username[100], passwd[100];
    printf("请输入账号:");
    scanf("%s", username);
    printf("请输入密码:");
    scanf("%s", passwd);
    if (strcmp(usr, username) == 0 && strcmp(pwd, passwd) == 0)
    {
        printf("登录成功!\n");
        main_list();
    }
    else
    {
        t--;
        if (t == 0)
        {
            printf("连续三次输入不正确，系统退出！\n");
            getchar();
            getchar();
            return;
        }
        printf("对不起，您输入的密码不正确，您还有%d次机会.\n", t);
        login_check(t);
    }
}
void main_list()
{
    printf("***********************\n");
    printf("*      1.会员管理     *\n");
    printf("*      2.书籍管理     *\n");
    printf("*      3.购物结算     *\n");
    printf("*      4.注销         *\n");
    printf("***********************\n");
    printf("请选择,输入数字(1-4):\n");
    int in;
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        member_list();
        break;
    case 2:
        book_list();
        break;
    case 3:
        buy();
        break;
    case 4:
        login();
        break;
    default:
        printf("输入错误，请重新输入.\n");
        main_list();
        break;
    }
}
void member_list()
{
    printf("图书销售管理系统>会员管理\n");
    printf("***********************\n");
    printf("*    1.显示所有会员   *\n");
    printf("*    2.添加会员信息   *\n");
    printf("*    3.修改会员信息   *\n");
    printf("*    4.返回主菜单     *\n");
    printf("***********************\n");
    printf("请选择,输入数字(1-4):\n");
    int in;
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        list_member();
        break;
    case 2:
        creat_member();
        break;
    case 3:
        change_member();
        break;
    case 4:
        main_list();
        break;
    default:
        printf("输入错误，请重新输入.\n");
        member_list();
        break;
    }
}
void list_member()
{
    printf("图书销售管理系统>会员管理>显示所有会员\n");
    int i = 0;
    printf("会员号  姓名    积分\n");
    while (m[i].no != 0)
    {
        printf("%-3d     %-10s %d\n", m[i].no, m[i].name, m[i].point);
        i++;
    }
    member_list();
}
void creat_member()
{
    char name[100];
    int point;
    printf("图书销售管理系统>会员管理>添加会员信息\n");
    printf("请输入新会员姓名:");
    scanf("%s", name);
    printf("请输入新会员积分:");
    scanf("%d", &point);
    int i = 0;
    while (m[i].no != 0)
    {
        i++;
    }
    m[i].no = m[i - 1].no + 1;
    strcpy(m[i].name, name);
    m[i].point = point;
    printf("添加成功!\n");
    member_list();
}
void change_member()
{
    int no, point;
    char name[100];
    printf("图书销售管理系统>会员管理>修改会员信息\n");
    printf("请输入要修改的会员号:");
    scanf("%d", &no);
    printf("请输入要修改的会员名:");
    scanf("%s", name);
    printf("请输入要修改的会员积分:");
    scanf("%d", &point);
    if (m[no - 1].no == no)
    {
        strcpy(m[no - 1].name, name);
        m[no - 1].point = point;
        printf("修改成功!\n");
    }
    else
    {
        printf("没有此用户，修改失败!\n");
    }
    member_list();
}
void book_list()
{
    printf("图书销售管理系统>书籍管理\n");
    printf("***********************\n");
    printf("*      1.查看书目     *\n");
    printf("*      2.添加书籍     *\n");
    printf("*      3.删除书籍     *\n");
    printf("*      4.返回主菜单   *\n");
    printf("***********************\n");
    printf("请选择,输入数字(1-4):\n");
    int in;
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        list_books();
        break;
    case 2:
        creat_book();
        break;
    case 3:
        delete_book();
        break;
    case 4:
        main_list();
        break;
    default:
        printf("输入错误，请重新输入.\n");
        book_list();
        break;
    }
}
void list_books()
{
    printf("图书销售管理系统>书籍管理>查看书目\n图书号          图书名                  图书价钱\n");
    for (int i = 0; i < 1000; i++)
    {
        if (b[i].no != 0)
        {
            printf(" %3d            %-30s %d\n", b[i].no, b[i].name, b[i].price);
        }
    }
    book_list();
}
void creat_book()
{
    char bookname[100];
    int price, count = 0, no = 1;
    printf("图书销售管理系统>书籍管理>添加书籍\n");
    printf("请输入图书名:");
    scanf("%s", bookname);
    printf("请输入图书价钱:");
    scanf("%d", &price);
    for (int i = 0; i < 1000; i++)
    {
        if (b[i].no != 0)
        {
            no = b[i].no;
            count = i;
        }
    }
    b[count + 1].no = no + 1;
    strcpy(b[count + 1].name, bookname);
    b[count + 1].price = price;
    printf("添加成功!\n");
    book_list();
}
void delete_book()
{
    char bookname[100];
    printf("图书销售管理系统>书籍管理>删除书籍\n");
    printf("请输入要删除的图书书名:");
    scanf("%s", bookname);
    for (int i = 0; i < 1000; i++)
    {
        if (strcmp(b[i].name, bookname) == 0)
        {
            printf("找到该图书,位置为:%d\n", b[i].no);
            b[i].no = 0;
            memset(b[i].name, '\0', sizeof(b[i].name));
            b[i].price = 0;
            printf("删除成功!\n");
            break;
        }
        if (i == 999)
        {
            printf("该书籍无记录!\n");
        }
    }
    book_list();
}
void buy()
{
    int no, bno, n, count;
    char in;
    printf("图书销售管理系统>购物结算\n");
    printf("图书销售管理系统>书籍管理>查看书目\n");
    printf("图书号          图书名                  图书价钱\n");
    for (int i = 0; i < 1000; i++)
    {
        if (b[i].no != 0)
        {
            printf(" %3d            %-30s %d\n", b[i].no, b[i].name, b[i].price);
        }
    }
    printf("请输入会员号:");
    scanf("%d", &no);
    printf("请输入你要购买的书籍编号:");
    scanf("%d", &bno);
    printf("请输入你要购买的数量:");
    scanf("%d", &n);
    for (int i = 0; i < 1000; i++)
    {
        if (bno == b[i].no)
        {
            count = i;
            break;
        }
    }
    if (m[no - 1].point > b[count].price * n)
    {
        printf("你要购买的书籍为%s,数量为%d,总额为%d.\n",b[count].name, n, b[count].price * n);
        m[no - 1].point -= b[count].price * n;
        printf("是否继续?(y/n)\n");
        getchar();
        scanf("%c", &in);
        if (in == 'y')
            buy();
        else
            main_list();
    }
    else
    {
        printf("你的积分不够,不能购买!\n");
        main_list();
    }
}