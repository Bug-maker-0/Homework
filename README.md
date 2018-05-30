＃家庭作业
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *create(){
    struct node *head,*p,*tail;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    tail=head;
    int x;
    printf("输入数字(当输入0时结束)："); 
    while(scanf("%d",&x)){
        if(x==0)
        {
            break;
        }
        else
        { 
       	printf("输入数字(当输入0时结束)："); 
		p=(struct node*)malloc(sizeof(struct node));
        p->data=x;
        p->next=NULL;
        tail->next=p;
        tail=p;
        }
    }
    return head;
}

int print(struct node*h){
    struct node *p;
    p=h->next;
    while(p!=NULL)
    {
        if(p==h->next)
        {
            printf("%d\t",p->data);
        }
        else printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
}

struct node *reverse(struct node*h){
    struct node *p,*q;
    p=h->next;
    h->next=NULL; 
    q=p->next;
    while(p!=NULL)
    {
        p->next=h->next;
        h->next=p;
        p=q;
        if(q!=NULL)
        {
            q=q->next;
        }
    }
    return h;
}

int main(){
    struct node *h,*h1;
    h=create();
    printf("建立的链表是：\n");
    print(h);
    h1=reverse(h);
    printf("逆置后的链表是：\n");
    print(h1);
}
