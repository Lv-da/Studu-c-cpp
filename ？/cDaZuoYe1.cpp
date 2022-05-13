#include <bits/stdc++.h>
using namespace std;

#define total_Stu_Num 205//修改学生总数，可修改
#define total_Sub_Num 6//修改科目总数，可修改
#define total_Score_Num 100//修改满分，暂时不可修改
#define passing_Score_Num 60//修改及格分，暂时不可修改

struct score_s
{
    string name;//姓名
    int score[total_Sub_Num+5]={0};//1-10科目,不存在的科目输入分数为0即可,第一个科目为1
    string Class;//班级
    string id;//学号
    int sum=0;//总分
    int un_passing_sub=0;//不及格科目数
}score[total_Stu_Num];

int cnt=0;//录入成绩时计数供score[]使用

//操作函数列表(注释掉的是有想法还未实践的函数)
void menu();//菜单
void menu_score();//菜单-成绩
void menu_search();//菜单-查询
void menu_analyze();//菜单-分析
void menu_sort();//菜单-排序
void output_stu();//输出学生信息

void input_score();//输入成绩
void change_score();//修改成绩
void change_id();//修改学号
void change_class();//修改班级
void change_name();//修改姓名
//void delete_score();//删除成绩

void search_id();//用学号查找某一科成绩
void search_id_sum();//用学号查找总成绩
void search_name();//用姓名查找某一科成绩
void search_name_sum();//用姓名查找总成绩
void search_class();//用班级查找某一科成绩
void search_class_sum();//用班级查找总成绩
void search_subject();//用科目查找某一科成绩

void search_sub_average();//按科目查找平均成绩
void search_class_average();//班级平均成绩
void sort_score_sub();//按科目排序
void sort_score();//按总成绩排序

void segmented_score_sub();//按科目分段统计成绩人数，10分一段
//void segmented_score();//按总分分段统计成绩人数，100分一段
void analyze_passing_rate();//统计各科及格率

//以下是甲方要求(指大作业要求的某些我没理解有什么实际用处的部分)
//void output_score();//输出成绩
void search_sub_total();//计算每一科的总分
void search_unpassing_3sub();//查找三科不及格的学生

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
            default:cout<<"输入错误，请重新输入"<<endl;
        }
        int x;
        cout<<"输入1继续，输入0退出"<<endl;
        cin>>x;
        if(x==0)return 0;
        system("cls");
        menu();
    }
}

void menu()
{
    cout<<"*****************************"<<endl;
    cout<<"欢迎来到某简易成绩管理系统"<<endl;
    cout<<"1.输入和修改成绩"<<endl;
    cout<<"2.查询成绩"<<endl;
    cout<<"3.成绩统计分析"<<endl;
    cout<<"4.成绩排序"<<endl;
    cout<<"5.导出学生信息"<<endl;
    cout<<"0.退出"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"请输入操作序号：";
}

void menu_score()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"以下是输入和修改成绩的操作"<<endl;
    cout<<"1.输入成绩"<<endl;
    cout<<"2.修改成绩"<<endl;
    cout<<"3.修改学号"<<endl;
    cout<<"4.修改班级"<<endl;
    cout<<"5.修改姓名"<<endl;
    cout<<"0.返回"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"请输入操作序号：";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:input_score();break;
        case 2:change_score();break;
        case 3:change_id();break;
        case 4:change_class();break;
        case 5:change_name();break;
        default:cout<<"输入错误，请重新输入"<<endl;
    }
}

void menu_search()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"以下是查找成绩的操作"<<endl;
    cout<<"1.用学号查找某一科成绩"<<endl;
    cout<<"2.用学号查找总成绩"<<endl;
    cout<<"3.用姓名查找某一科成绩"<<endl;
    cout<<"4.用姓名查找总成绩"<<endl;
    cout<<"5.用班级查找某一科成绩"<<endl;
    cout<<"6.用班级查找总成绩"<<endl;
    cout<<"7.用科目查找某一科成绩"<<endl;
    cout<<"0.返回"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"请输入操作序号：";
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
        default:cout<<"输入错误，请重新输入"<<endl;
    }
}

void menu_analyze()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"以下是关于成绩的统计"<<endl;
    cout<<"1.按科目查找平均成绩"<<endl;
    cout<<"2.班级平均成绩"<<endl;
    cout<<"3.按科目分段统计成绩人数，10分一段"<<endl;
    cout<<"4.统计各科及格率"<<endl;
    cout<<"5.计算每一科的总分"<<endl;
    cout<<"6.查找三科及以上不及格的学生"<<endl;
    cout<<"0.返回"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"请输入操作序号：";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:search_sub_average();break;
        case 2:search_class_average();break;
        case 3:segmented_score_sub();break;
        case 4:analyze_passing_rate();break;
        case 5:search_sub_total();break;
        case 6:search_unpassing_3sub();break;
        default:cout<<"输入错误，请重新输入"<<endl;
    }
}

void menu_sort()
{
    int n;
    cout<<"*****************************"<<endl;
    cout<<"以下是关于成绩的排序"<<endl;
    cout<<"1.按科目排序"<<endl;
    cout<<"2.按总成绩排序"<<endl;
    cout<<"0.返回"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"请输入操作序号：";
    cin>>n;
    switch(n){
        case 0:return;
        case 1:sort_score_sub();break;
        case 2:sort_score();break;
        default:cout<<"输入错误，请重新输入"<<endl;
    }
}

void input_score()
{
    if(cnt>=total_Stu_Num)
    {
        cout<<"成绩已满，无法输入"<<endl;
        return;
    }
    string name;
    int a_score;
    int subject;
    string Class;
    string id;
    cout<<"请输入学生姓名：";
    cin>>name;
    cout<<"请输入学生班级：";
    cin>>Class;
    cout<<"请输入学生学号：";
    cin>>id;
    cout<<"请按照科目顺序输入学生成绩(共"<<total_Sub_Num<<"项(1-"<<total_Sub_Num<<")，不存在的科目输入0即可)：";
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
    cout<<"请输入学生学号：";
    cin>>id;
    cout<<"请输入要修改的科目序号：";
    cin>>subject;
    cout<<"请输入修改后的成绩：";
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
    cout<<"请输入学生学号：";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生成绩："<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"科目"<<j+1<<"："<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_id_sum()
{
    string id;
    cout<<"请输入学生学号：";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生总成绩："<<score[i].sum<<endl;
        }
    }
}

void search_name()
{
    string name;
    int subject;
    cout<<"请输入学生姓名：";
    cin>>name;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].name==name)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生成绩："<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"科目"<<j+1<<"："<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_name_sum()
{
    string name;
    cout<<"请输入学生姓名：";
    cin>>name;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].name==name)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生总成绩："<<score[i].sum<<endl;
        }
    }
}

void search_class()
{
    string Class;
    int subject;
    cout<<"请输入学生班级：";
    cin>>Class;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].Class==Class)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生成绩："<<endl;
            for(int j=0;j<total_Sub_Num;j++)
            {
                cout<<"科目"<<j+1<<"："<<score[i].score[j]<<endl;
            }
        }
    }
}

void search_class_sum()
{
    string Class;
    cout<<"请输入学生班级：";
    cin>>Class;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].Class==Class)
        {
            cout<<"学生姓名："<<score[i].name<<endl;
            cout<<"学生班级："<<score[i].Class<<endl;
            cout<<"学生学号："<<score[i].id<<endl;
            cout<<"学生总成绩："<<score[i].sum<<endl;
        }
    }
}

void search_subject()
{
    int subject;
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<"学生姓名："<<score[i].name<<endl;
        cout<<"学生班级："<<score[i].Class<<endl;
        cout<<"学生学号："<<score[i].id<<endl;
        cout<<"学生成绩："<<endl;
        cout<<"科目"<<subject<<"："<<score[i].score[subject-1]<<endl;
    }
}

void search_sub_average()
{
    int subject,sum=0;
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        sum=sum+score[i].score[subject-1];
    }
    cout<<"科目"<<subject<<"平均分："<<sum/cnt<<endl;
}

void search_class_average()
{
    string Class;
    int subject,sum=0;
    cout<<"请输入学生班级：";
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
    cout<<"班级"<<Class<<"平均分："<<sum/count<<endl;
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
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
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
                cout<<"排名"<<rank<<" 学生姓名："<<score[i].name<<" 成绩："<<score[i].score[subject-1]<<endl;
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
                cout<<"排名"<<rank<<" 学生姓名："<<score[i].name<<" 成绩："<<score[i].sum<<endl;
            }
        }
    }
}

void segmented_score_sub()
{
    int subject,counter[105]={0};
    int score_max=total_Score_Num;
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
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
        cout<<"分数"<<i*10<<"-"<<(i+1)*10<<"人数："<<counter[i]<<endl;
    }
}

void analyze_passing_rate()
{
    int subject,counter[105]={0};
    int score_max=total_Score_Num;
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++){
        if(score[i].score[subject-1]>=passing_Score_Num){
            counter[0]++;
        }
    }
    cout<<"及格人数："<<counter[0]<<endl;
    cout<<"不及格人数："<<cnt-counter[0]<<endl;
    cout<<"及格率："<<(double)counter[0]/cnt<<endl;
}

void search_sub_total()
{
    int subject,sum=0;
    cout<<"请输入科目：";
    cin>>subject;
    if(subject>total_Sub_Num||subject<1){
        cout<<"输入错误！"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        sum=sum+score[i].score[subject-1];
    }
    cout<<"科目"<<subject<<"总分："<<sum<<endl;
}

void search_unpassing_3sub()
{
    int countist=0;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].un_passing_sub>=3){
            cout<<"学生姓名："<<score[i].name<<" 不及格科目数："<<score[i].un_passing_sub<<endl;
        }
        countist++;
    }
    if(countist==0){
        cout<<"没有不及格的学生！"<<endl;
    }
}

void change_id()
{
    string id,new_id;
    cout<<"请输入要修改的学生学号：";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"请输入新的学号：";
            cin>>new_id;
            score[i].id=new_id;
            cout<<"修改成功！"<<endl;
            return;
        }
    }
    cout<<"没有找到该学生！"<<endl;
}

void change_class()
{
    string id,new_class;
    cout<<"请输入要修改的学生学号：";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"请输入新的班级：";
            cin>>new_class;
            score[i].Class=new_class;
            cout<<"修改成功！"<<endl;
            return;
        }
    }
    cout<<"没有找到该学生！"<<endl;
}

void change_name()
{
    string id;
    string new_name;
    cout<<"请输入要修改的学生学号：";
    cin>>id;
    for(int i=0;i<cnt;i++)
    {
        if(score[i].id==id){
            cout<<"请输入新的姓名：";
            cin>>new_name;
            score[i].name=new_name;
            cout<<"修改成功！"<<endl;
            return;
        }
    }
    cout<<"没有找到该学生！"<<endl;
}

void output_stu()
{
    cout<<"学生名单如下"<<endl;
    if(cnt==0){
        cout<<"没有学生信息！"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<"学号："<<score[i].id<<"  姓名："<<score[i].name<<"  班级："<<score[i].Class<<endl;
    }
}