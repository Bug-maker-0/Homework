# Homework//4.2������������ݴ�С����ϲ������� 
#include<stdio.h>
#include<stdlib.h>

typedef struct data{
	int num;
	struct data *next;
}node,*linklist;
//�������� 
linklist create(){
	linklist L=NULL;
	node *d,*x;
	int a;
	L = (linklist)malloc(sizeof(node));
	L->next =NULL;
	d=L;
	printf("����������������֣�����0������:"); 
	while(scanf("%d",&a)){
		if(a==0)
			break;
		else{
			x = (linklist)malloc(sizeof(node));
			x->num = a;
			x->next = d->next ;
			d->next = x;
			d = x;
		}
	}
	d->next = NULL;
	return L;
} 
//���������ĺϲ�������С�����˳����������������ݺϲ� 
linklist merge(linklist H1,linklist H2){
	node *p,*p1,*p2;
	p1 = H1->next ;
	p2 = H2->next ;
	p =  H1;
	while(p1&&p2){
		if(p1->num <p2->num){
			p->next = p1;
			p = p1;
			p1 = p1->next ;
		}
		else{
			p->next  = p2;
			p = p2;
			p2 = p2->next ;
		}
		
	}
	if(p1)
		p->next = p1;
	else
		p->next = p2;
	return H1;	
}
//������� 
int print(linklist L){
	node *d;
	d = L->next ;
	while(d){
		printf("%d\t",d->num);
		d = d->next ;
	}
}

int main(){
	linklist H,H1,H2;
	
	printf("\n                              ");
	printf("4.2:������������ݴ�С����ϲ�������\n\n\n\n"); 
	
	H1 = create();
	printf("�����ĵ�һ�������ǣ�\t"); 
	print(H1);
	printf("\n\n\n");
	
	H2 = create();
	printf("�����ĵڶ��������ǣ�\t"); 
	print(H2);
	printf("\n\n\n");
	
	printf("�ϲ���������ǣ�\t");
	H = merge(H1,H2);
	print(H);
	 
}
