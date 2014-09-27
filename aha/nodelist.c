/*************************************************************************
	> File Name: nodelist.c
	> Author: 
	> Mail: 
	> Created Time: 2014年09月28日 星期日 03时34分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
//这里创建一个结构体用来表示链表的节点类型
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *p, *q, *t;
    int i,n,a;
    scanf("%d", &n);
    head = NULL; //头指针初时为空
    for( i = 1; i <= n; i++ ) //循环读入n个数
    {
        scanf("%d", &a);
        //动态申请一个空间，用来存放一个节点，并用临时指针p指向这个节点
        p = (struct node *)malloc(sizeof(struct node));
        p -> data = a;//将数据存储到当前节点的data域中
        p -> next = NULL;//设置当前节点的后续指针指向空，也就是当前节点的下一个节点为空
        if( head == NULL)
            head = p;//如果这是第一个创建的节点，则将头指针指向这个节点
        else
            q -> next = p;//如果不是第一个创建的节点，则将上一个节点的后继指针指向当前节点

        q = p;//指针q也指向当前的节点
    }

    scanf("%d", &a);//读入待插入的数
    t = head;//从链表头部开始遍历
    while(t != NULL)//当没有到达链表尾部的时候循环
    {
        if(t -> next -> data > a)//如果当前节点下一个节点的值大于待插入的数，将数插入到中间
        {
            p = (struct node *)malloc(sizeof(struct node));//动态申请一个空间，用来存储新增节点
            p -> data = a;
            p -> next = t -> next;//新增节点的后继指针指向当前节点的后继指针所指向的节点
            t -> next = p;//当前节点的后继结点指向新增结点
            break;//插入完毕推出循环
        }
        t = t -> next;//继续下一个结点
    }

    //输出链表中的所有数
    t = head;
    while(t != NULL)
    {
        printf("%d ", t -> data);
        t = t -> next;
    }

    getchar(); getchar();
    return 0;
}
