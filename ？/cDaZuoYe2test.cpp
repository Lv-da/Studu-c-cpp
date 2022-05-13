#include <bits/stdc++.h>
using namespace std;

#define MAX_MEMBER_CNT 105//����Ա�������޸�
#define MAX_BOOK_CNT 105//����鼮�������޸�

//��ʼ������
void main_menu();//���˵�
void init_member();//��ʼ����Ա
void init_book();//��ʼ���鼮
//��Ա������
int cnt_member = 0;//��Ա��
struct member{
    string name;
    int id;
    int point;
}mem[MAX_MEMBER_CNT];
void member_menu();//��Ա����˵�
void show_member();//��ʾ���л�Ա
void add_member();//��ӻ�Ա
void change_member();//�޸Ļ�Ա��Ϣ
//�鼮������
int cnt_book = 0;//�鼮��
struct book{
    string name;
    int id;
    int point;
}book[MAX_BOOK_CNT];
void book_menu();//�鼮����˵�
void book_list();//��ʾ�����鼮
void add_book();//����鼮
void delete_book();//ɾ���鼮
//������㹦��
void shopping_menu();//�������˵�

void ClS(){
    cout<<"���������������";//����ģ��,���嵽���溯����Ҫ��
    int detect;
    cin>>detect;
    system("cls");
}

int main()
{
    //��¼ģ�飬����main������
    {
        string username, password;
        int count;
        bool flag = false;
        cout << "�������û�����";
        cin >> username;
        while(!flag){
            cout << "���������룺";
            cin >> password;
            if (username=="admin" && password=="123456")
            {
                cout<<"��¼�ɹ���"<<endl;
                flag = true;
            }
            else
            {
                cout<<"��¼ʧ�ܣ�"<<endl;
                cout<< "�����������û�����";
                cin>>username;
                cout<<"�������������룺";
                cin>>password;
                count++;
            }
            if(count>=3)
            {
                cout<<"�������������࣬�����˳���"<<endl;
                return 0;
            }
        }
    }
    init_book();//��ʼ���鼮
    init_member();//��ʼ����Ա
    main_menu();//���˵�
    int input;
    while(cin>>input){
        switch(input){
            case 1:member_menu();break;
            case 2:book_menu();break;
            case 3:shopping_menu();break;
            case 4:return 0;
            default:
                cout<<"�������"<<endl;
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
    cout<<"*      ͼ�����۹���ϵͳ      *"<<endl;
    cout<<"*         1.��Ա����         *"<<endl;
    cout<<"*         2.�鼮����         *"<<endl;
    cout<<"*         3.�������         *"<<endl;
    cout<<"*         4.ע��             *"<<endl;
    cout<<"******************************"<<endl;
    cout<<"��ѡ���������֣�1-4����";
}

void member_menu()
{
    begin:
    cout<<"ͼ�����۹���ϵͳ>��Ա����"<<endl;
    cout<<"**************************"<<endl;
    cout<<"*  1.��ʾ���л�Ա        *"<<endl;
    cout<<"*  2.��ӻ�Ա��Ϣ        *"<<endl;
    cout<<"*  3.�޸Ļ�Ա��Ϣ        *"<<endl;
    cout<<"*  4.�������˵�          *"<<endl;
    cout<<"**************************"<<endl;
    cout<<"��ѡ���������֣�";
    int input;
    cin >> input;

    switch(input){
        case 1:
            cout<<"��ʾ���л�Ա��Ϣ"<<endl;
            show_member();
            break;
        case 2:
            cout<<"��ӻ�Ա��Ϣ"<<endl;
            add_member();
            break;
        case 3:
            cout<<"�޸Ļ�Ա��Ϣ"<<endl;
            change_member();
            break;
        case 4:
            cout<<"�������˵�"<<endl;
            return;
        default:
            cout<<"����������������룡"<<endl;
    }
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
    system("cls");
    goto begin;
}

void book_menu()
{
    begin:
    cout<<"ͼ�����۹���ϵͳ>�鼮����"<<endl;
    cout<<"****************"<<endl;
    cout<<"* 1.�鿴��Ŀ   *"<<endl;
    cout<<"* 2.����鼮   *"<<endl;
    cout<<"* 3.ɾ���鼮   *"<<endl;
    cout<<"* 4.�������˵� *"<<endl;
    cout<<"****************"<<endl;
    cout<<"��ѡ���������֣�";
    int input;
    cin >> input;
    switch(input){
        case 1:
            cout<<"�鿴��Ŀ"<<endl;
            book_list();
            break;
        case 2:
            cout<<"����鼮"<<endl;
            add_book();
            break;
        case 3:
            cout<<"ɾ���鼮"<<endl;
            delete_book();
            break;
        case 4:
            cout<<"�������˵�"<<endl;
            return;
        default:
            cout<<"����������������룡"<<endl;
    }
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
    system("cls");
    goto begin;

}

void shopping_menu()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ>�������"<<endl;
    book_list();
    int member_id,book_id,buy_cnt;
    cout<<"�������Ա�ţ�";
    cin >> member_id;
    cout<<"������Ҫ������鼮��ţ�";
    cin >> book_id;
    cout<<"��������Ҫ�����������";
    cin >> buy_cnt;
    cout<<"��Ҫ�����ͼ����"<<book[book_id-1].name<<"��������"<<buy_cnt<<"���ܶ���"<<book[book_id-1].point*buy_cnt<<endl;
    cout<<"�Ƿ��������y/n��:";
    char input;
    cin >> input;
    if(input == 'y'){
        if(mem[member_id-1].point>=book[book_id-1].point*buy_cnt){
            mem[member_id-1].point -= book[book_id-1].point*buy_cnt;
            cout<<"����ɹ���"<<endl;
        }else{
            cout<<"����ʧ�ܣ�"<<endl;
        }
    }
    else if(input == 'n'){
        cout<<"����ʧ�ܣ�"<<endl;
    }
    
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
    
}

void show_member()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > ��ʾ��Ա��Ϣ"<<endl;
    cout<<"��Ա��\t����\t����\t"<<endl;
    for(int i=0;i<cnt_member;i++){
        cout<<mem[i].id<<"\t"<<mem[i].name<<"\t"<<mem[i].point<<"\t"<<endl;
    }
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void add_member()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > ������Ա��Ϣ"<<endl;
    mem[cnt_member].id = cnt_member+1;
    cout<<"�������»�Ա������";
    cin >> mem[cnt_member].name;
    cout<<"�������»�Ա���֣�";
    cin >> mem[cnt_member].point;
    cout<<"��ӳɹ���"<<endl;
    cnt_member++;
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void change_member()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > ��Ա��Ϣ���� > �޸Ļ�Ա��Ϣ"<<endl;
    cout<<"������Ҫ�޸ĵĻ�Ա�ţ�";
    int id;
    cin >> id;
    for(int i=0;i<cnt_member;i++){
        if(mem[i].id == id){
            cout<<"�������µĻ�Ա������";
            cin >> mem[i].name;
            cout<<"�������µĻ�Ա���֣�";
            cin >> mem[i].point;
            cout<<"�޸ĳɹ���"<<endl;
            return;
        }
    }
    cout<<"�޸�ʧ�ܣ�"<<endl;
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void book_list()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > �鼮���� > ��ʾ�鼮��Ϣ"<<endl;
    cout<<"ͼ���\tͼ����\tͼ���Ǯ"<<endl;
    for(int i=0;i<cnt_book;i++){
        cout<<book[i].id<<"\t"<<book[i].name<<"\t"<<book[i].point<<endl;
    }
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void add_book()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > �鼮���� > �����鼮��Ϣ"<<endl;
    book[cnt_book].id = cnt_book+1;
    cout<<"������ͼ������";
    cin >> book[cnt_book].name;
    cout<<"������ͼ���Ǯ��";
    cin >> book[cnt_book].point;
    cout<<"��ӳɹ���"<<endl;
    cnt_book++;
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void delete_book()
{
    system("cls");
    cout<<"ͼ�����۹���ϵͳ > �鼮���� > ɾ���鼮��Ϣ"<<endl;
    cout<<"������Ҫɾ����ͼ��ţ�";
    int id;
    cin >> id;
    for(int i=0;i<cnt_book;i++){
        if(book[i].id == id){
            for(int j=i;j<cnt_book-1;j++){
                book[j] = book[j+1];
            }
            cout<<"ɾ���ɹ���"<<endl;
            return;
        }
    }
    cout<<"ɾ��ʧ�ܣ�"<<endl;
    cout<<"���������������";//����ģ��
    int detect;
    cin>>detect;
}

void init_member()
{
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="����";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="����";
    mem[cnt_member].point=600;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="����";
    mem[cnt_member].point=500;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="½��";
    mem[cnt_member].point=1000;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="Ǯ��";
    mem[cnt_member].point=900;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="��ǿ";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="С��";
    mem[cnt_member].point=100;
    cnt_member++;
    mem[cnt_member].id = cnt_member+1;
    mem[cnt_member].name="����";
    mem[cnt_member].point=100;
    cnt_member++;
}

void init_book()
{
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="C#2.0����";
    book[cnt_book].point=88;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="Java��̻���";
    book[cnt_book].point=55;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="J2SE����Ӧ�ó��򿪷�";
    book[cnt_book].point=60;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="���ݿ���ƺ�Ӧ��";
    book[cnt_book].point=45;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="ˮ䰴�";
    book[cnt_book].point=55;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="��¥��";
    book[cnt_book].point=68;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="��������";
    book[cnt_book].point=78;
    cnt_book++;
    book[cnt_book].id = cnt_book+1;
    book[cnt_book].name="�����μ�";
    book[cnt_book].point=29;
    cnt_book++;
}