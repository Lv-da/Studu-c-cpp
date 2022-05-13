#include <bits/stdc++.h>
using namespace std;

#define total_Stu_Num 205//�޸�ѧ�����������޸�
#define total_Sub_Num 6//�޸Ŀ�Ŀ���������޸�
#define total_Score_Num 100//�޸����֣���ʱ�����޸�
#define passing_Score_Num 60//�޸ļ���֣���ʱ�����޸�

struct score_s
{
    string name;//����
    int score[total_Sub_Num+5]={0};//1-10��Ŀ,�����ڵĿ�Ŀ�������Ϊ0����,��һ����ĿΪ1
    string Class;//�༶
    string id;//ѧ��
    int sum=0;//�ܷ�
    int un_passing_sub=0;//�������Ŀ��
}score[total_Stu_Num];

int cnt=0;//¼��ɼ�ʱ������score[]ʹ��

//���������б�(ע�͵��������뷨��δʵ���ĺ���)
void menu();//�˵�
void menu_score();//�˵�-�ɼ�
void menu_search();//�˵�-��ѯ
void menu_analyze();//�˵�-����
void menu_sort();//�˵�-����
void output_stu();//���ѧ����Ϣ

void input_score();//����ɼ�
void change_score();//�޸ĳɼ�
void change_id();//�޸�ѧ��
void change_class();//�޸İ༶
void change_name();//�޸�����
//void delete_score();//ɾ���ɼ�

void search_id();//��ѧ�Ų���ĳһ�Ƴɼ�
void search_id_sum();//��ѧ�Ų����ܳɼ�
void search_name();//����������ĳһ�Ƴɼ�
void search_name_sum();//�����������ܳɼ�
void search_class();//�ð༶����ĳһ�Ƴɼ�
void search_class_sum();//�ð༶�����ܳɼ�
void search_subject();//�ÿ�Ŀ����ĳһ�Ƴɼ�

void search_sub_average();//����Ŀ����ƽ���ɼ�
void search_class_average();//�༶ƽ���ɼ�
void sort_score_sub();//����Ŀ����
void sort_score();//���ܳɼ�����

void segmented_score_sub();//����Ŀ�ֶ�ͳ�Ƴɼ�������10��һ��
//void segmented_score();//���ֶַܷ�ͳ�Ƴɼ�������100��һ��
void analyze_passing_rate();//ͳ�Ƹ��Ƽ�����

//�����Ǽ׷�Ҫ��(ָ����ҵҪ���ĳЩ��û�����ʲôʵ���ô��Ĳ���)
//void output_score();//����ɼ�
void search_sub_total();//����ÿһ�Ƶ��ܷ�
void search_unpassing_3sub();//�������Ʋ������ѧ��

int main(){
    int n;
    menu();
    while(cin>>n){
        switch(n){
            case 0:return 0;
            case 1:menu_score();break;
            case 2:menu_search();break;
            case 3:menu_analyze();break;
            case 4:menu_sort();break;
            case 5:output_stu();break;
            default:cout<<"�����������������"<<endl;
        }
        int x;
        cout<<"����1����������0�˳�"<<endl;
        cin>>x;
        if(x==0)return 0;
        system("cls");
        menu();
    }
}

void menu()
{
    cout<<"*****************************"<<endl;
    cout<<"��ӭ����ĳ���׳ɼ�����ϵͳ"<<endl;
    cout<<"1.������޸ĳɼ�"<<endl;
    cout<<"2.��ѯ�ɼ�"<<endl;
    cout<<"3.�ɼ�ͳ�Ʒ���"<<endl;
    cout<<"4.�ɼ�����"<<endl;
    cout<<"5.����ѧ����Ϣ"<<endl;
    cout<<"0.�˳�"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"�����������ţ�";
}

void menu_score()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"������������޸ĳɼ��Ĳ���"<<endl;
    cout<<"1.����ɼ�"<<endl;
    cout<<"2.�޸ĳɼ�"<<endl;
    cout<<"3.�޸�ѧ��"<<endl;
    cout<<"4.�޸İ༶"<<endl;
    cout<<"5.�޸�����"<<endl;
    cout<<"0.����"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"�����������ţ�";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:input_score();break;
        case 2:change_score();break;
        case 3:change_id();break;
        case 4:change_class();break;
        case 5:change_name();break;
        default:cout<<"�����������������"<<endl;
    }
}

void menu_search()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"�����ǲ��ҳɼ��Ĳ���"<<endl;
    cout<<"1.��ѧ�Ų���ĳһ�Ƴɼ�"<<endl;
    cout<<"2.��ѧ�Ų����ܳɼ�"<<endl;
    cout<<"3.����������ĳһ�Ƴɼ�"<<endl;
    cout<<"4.�����������ܳɼ�"<<endl;
    cout<<"5.�ð༶����ĳһ�Ƴɼ�"<<endl;
    cout<<"6.�ð༶�����ܳɼ�"<<endl;
    cout<<"7.�ÿ�Ŀ����ĳһ�Ƴɼ�"<<endl;
    cout<<"0.����"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"�����������ţ�";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:search_id();break;
        case 2:search_id_sum();break;
        case 3:search_name();break;
        case 4:search_name_sum();break;
        case 5:search_class();break;
        case 6:search_class_sum();break;
        case 7:search_subject();break;
        default:cout<<"�����������������"<<endl;
    }
}

void menu_analyze()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"�����ǹ��ڳɼ���ͳ��"<<endl;
    cout<<"1.����Ŀ����ƽ���ɼ�"<<endl;
    cout<<"2.�༶ƽ���ɼ�"<<endl;
    cout<<"3.����Ŀ�ֶ�ͳ�Ƴɼ�������10��һ��"<<endl;
    cout<<"4.ͳ�Ƹ��Ƽ�����"<<endl;
    cout<<"5.����ÿһ�Ƶ��ܷ�"<<endl;
    cout<<"6.�������Ƽ����ϲ������ѧ��"<<endl;
    cout<<"0.����"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"�����������ţ�";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:search_sub_average();break;
        case 2:search_class_average();break;
        case 3:segmented_score_sub();break;
        case 4:analyze_passing_rate();break;
        case 5:search_sub_total();break;
        case 6:search_unpassing_3sub();break;
        default:cout<<"�����������������"<<endl;
    }
}

void menu_sort()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"�����ǹ��ڳɼ�������"<<endl;
    cout<<"1.����Ŀ����"<<endl;
    cout<<"2.���ܳɼ�����"<<endl;
    cout<<"0.����"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"�����������ţ�";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:sort_score_sub();break;
        case 2:sort_score();break;
        default:cout<<"�����������������"<<endl;
    }
}

void input_score()
{
    if(cnt>=total_Stu_Num)
    {
        cout<<"�ɼ��������޷�����"<<endl;
        return;
    }
    string name;
    int a_score;
    int subject;
    string Class;
    string id;
    cout<<"������ѧ��������";
    cin>>name;
    cout<<"������ѧ���༶��";
    cin>>Class;
    cout<<"������ѧ��ѧ�ţ�";
    cin>>id;
    cout<<"�밴�տ�Ŀ˳������ѧ���ɼ�(��"<<total_Sub_Num<<"��(1-"<<total_Sub_Num<<")�������ڵĿ�Ŀ����0����)��";
    for(int i=0;i<total_Sub_Num;i++)
    {
        cin>>a_score;
        score[cnt].score[i]=a_score;
        if(a_score<passing_Score_Num){
            score[cnt].un_passing_sub++;
        }
    }
    score[cnt].name=name;
    score[cnt].Class=Class;
    score[cnt].id=id;
    for(int i=0;i<total_Sub_Num;i++)
    {
        score[cnt].sum+=score[cnt].score[i];
    }

    cnt++;
}

void change_score()
{
    string id;
    int subject;
    int a_score;
    cout<<"������ѧ��ѧ�ţ�";
    cin>>id;
    cout<<"������Ҫ�޸ĵĿ�Ŀ��ţ�";
    cin>>subject;
    cout<<"�������޸ĺ�ĳɼ���";
    cin>>a_score;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id)
        {
            score[i].score[subject-1]=a_score;
        }
    }
}

void search_id()
{
    string id;
    int subject;
    cout<<"������ѧ��ѧ�ţ�";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ɼ���"<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"��Ŀ"<<j+1<<"��"<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_id_sum()
{
    string id;
    cout<<"������ѧ��ѧ�ţ�";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ܳɼ���"<<score[i].sum<<endl;
        }
    }
}

void search_name()
{
    string name;
    int subject;
    cout<<"������ѧ��������";
    cin>>name;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].name==name)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ɼ���"<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"��Ŀ"<<j+1<<"��"<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_name_sum()
{
    string name;
    cout<<"������ѧ��������";
    cin>>name;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].name==name)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ܳɼ���"<<score[i].sum<<endl;
        }
    }
}

void search_class()
{
    string Class;
    int subject;
    cout<<"������ѧ���༶��";
    cin>>Class;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].Class==Class)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ɼ���"<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"��Ŀ"<<j+1<<"��"<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_class_sum()
{
    string Class;
    cout<<"������ѧ���༶��";
    cin>>Class;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].Class==Class)
        {
            cout<<"ѧ��������"<<score[i].name<<endl;
            cout<<"ѧ���༶��"<<score[i].Class<<endl;
            cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
            cout<<"ѧ���ܳɼ���"<<score[i].sum<<endl;
        }
    }
}

void search_subject()
{
    int subject;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<"ѧ��������"<<score[i].name<<endl;
        cout<<"ѧ���༶��"<<score[i].Class<<endl;
        cout<<"ѧ��ѧ�ţ�"<<score[i].id<<endl;
        cout<<"ѧ���ɼ���"<<endl;
        cout<<"��Ŀ"<<subject<<"��"<<score[i].score[subject-1]<<endl;
    }
}

void search_sub_average()
{
    int subject,sum=0;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        sum=sum+score[i].score[subject-1];
    }
    cout<<"��Ŀ"<<subject<<"ƽ���֣�"<<sum/cnt<<endl;
}

void search_class_average()
{
    string Class;
    int subject,sum=0;
    cout<<"������ѧ���༶��";
    cin>>Class;
    int count=0;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].Class==Class)
        {
            for(int j=0;j<total_Sub_Num;j++)
            {
                sum=sum+score[i].score[j];
            }
            count++;
        }
    }
    cout<<"�༶"<<Class<<"ƽ���֣�"<<sum/count<<endl;
}

// struct Cmp{
//     bool operator()(const int &a,const int &b)
//     {
//         return a-b>0;
//     }
// };

void sort_score_sub()
{
    int subject,rank=0;
    multiset<int> sub_score;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        sub_score.insert(-score[i].score[subject-1]);
    }
    for(set<int>::iterator it=sub_score.begin();it!=sub_score.end();it++)
    {
        for(int i=0;i<cnt;i++)
        {
            if(-score[i].score[subject-1]==*it)
            {
                rank++;
                cout<<"����"<<rank<<" ѧ��������"<<score[i].name<<" �ɼ���"<<score[i].score[subject-1]<<endl;
            }
        }
    }
}

void sort_score()
{
    int sum=0,rank=0;
    multiset<int> score_sum;
    for(int i=0;i<cnt;i++)
    {
        score_sum.insert(-score[i].sum);
    }
    for(set<int>::iterator it=score_sum.begin();it!=score_sum.end();it++)
    {
        for(int i=0;i<cnt;i++)
        {
            if(-score[i].sum==*it)
            {
                rank++;
                cout<<"����"<<rank<<" ѧ��������"<<score[i].name<<" �ɼ���"<<score[i].sum<<endl;
            }
        }
    }
}

void segmented_score_sub()
{
    int subject,counter[105]={0};
    int score_max=total_Score_Num;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++){
        if(score[i].score[subject-1]>=0&&score[i].score[subject-1]<=10){
            counter[0]++;
        }else if(score[i].score[subject-1]>10&&score[i].score[subject-1]<=20){
            counter[1]++;
        }else if(score[i].score[subject-1]>20&&score[i].score[subject-1]<=30){
            counter[2]++;
        }else if(score[i].score[subject-1]>30&&score[i].score[subject-1]<=40){
            counter[3]++;
        }else if(score[i].score[subject-1]>40&&score[i].score[subject-1]<=50){
            counter[4]++;
        }else if(score[i].score[subject-1]>50&&score[i].score[subject-1]<=60){
            counter[5]++;
        }else if(score[i].score[subject-1]>60&&score[i].score[subject-1]<=70){
            counter[6]++;
        }else if(score[i].score[subject-1]>70&&score[i].score[subject-1]<=80){
            counter[7]++;
        }else if(score[i].score[subject-1]>80&&score[i].score[subject-1]<=90){
            counter[8]++;
        }else if(score[i].score[subject-1]>90&&score[i].score[subject-1]<=100){
            counter[9]++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<"����"<<i*10<<"-"<<(i+1)*10<<"������"<<counter[i]<<endl;
    }
}

void analyze_passing_rate()
{
    int subject,counter[105]={0};
    int score_max=total_Score_Num;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++){
        if(score[i].score[subject-1]>=passing_Score_Num){
            counter[0]++;
        }
    }
    cout<<"����������"<<counter[0]<<endl;
    cout<<"������������"<<cnt-counter[0]<<endl;
    cout<<"�����ʣ�"<<(double)counter[0]/cnt<<endl;
}

void search_sub_total()
{
    int subject,sum=0;
    cout<<"�������Ŀ��";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"�������"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        sum=sum+score[i].score[subject-1];
    }
    cout<<"��Ŀ"<<subject<<"�ܷ֣�"<<sum<<endl;
}

void search_unpassing_3sub()
{
    int countist=0;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].un_passing_sub>=3){
            cout<<"ѧ��������"<<score[i].name<<" �������Ŀ����"<<score[i].un_passing_sub<<endl;
        }
        countist++;
    }
    if(countist==0){
        cout<<"û�в������ѧ����"<<endl;
    }
}

void change_id()
{
    string id,new_id;
    cout<<"������Ҫ�޸ĵ�ѧ��ѧ�ţ�";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"�������µ�ѧ�ţ�";
            cin>>new_id;
            score[i].id=new_id;
            cout<<"�޸ĳɹ���"<<endl;
            return;
        }
    }
    cout<<"û���ҵ���ѧ����"<<endl;
}

void change_class()
{
    string id,new_class;
    cout<<"������Ҫ�޸ĵ�ѧ��ѧ�ţ�";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"�������µİ༶��";
            cin>>new_class;
            score[i].Class=new_class;
            cout<<"�޸ĳɹ���"<<endl;
            return;
        }
    }
    cout<<"û���ҵ���ѧ����"<<endl;
}

void change_name()
{
    string id;
    string new_name;
    cout<<"������Ҫ�޸ĵ�ѧ��ѧ�ţ�";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"�������µ�������";
            cin>>new_name;
            score[i].name=new_name;
            cout<<"�޸ĳɹ���"<<endl;
            return;
        }
    }
    cout<<"û���ҵ���ѧ����"<<endl;
}

void output_stu()
{
    cout<<"ѧ����������"<<endl;
    if(cnt==0){
        cout<<"û��ѧ����Ϣ��"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<"ѧ�ţ�"<<score[i].id<<"  ������"<<score[i].name<<"  �༶��"<<score[i].Class<<endl;
    }
}