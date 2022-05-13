#include <stdio.h>
#include <stdlib.h>//for malloc

typedef struct _node//定义节点结构体
{
    int data;//数据域
    struct _node *next;//指向下一个节点
} Node;//定义节点结构体

Node* add(Node* head,int number);

int main()
{
    Node *head = NULL;//初始化链表
    int number;
    do{
        scanf("%d", &number);//输入数据
        if(number != -1)
        {
            head = add(&head, number);//添加节点
        }
    }while(number != -1);//如果输入的数据不为-1，则继续输入

    return 0;
}

Node* add(Node* head,int number)
{
    Node *p = (Node*)malloc(sizeof(Node));//创建新节点接到之前的node后面
    p->data = number;//设置新节点的数据
    p->next = NULL;//新节点的next指向NULL
    Node *last = head;//从头开始遍历,找到最后一个节点，即last
    if(last){//如果链表不为空
        while(last->next != NULL){
            last = last->next;
        }//退出循环时，last指向最后一个节点
        last->next = p;//将新节点接到最后一个节点后面
    }else{//如果链表为空
        head = p;//将新节点接到链表头
    }
    return head;//返回头节点
}