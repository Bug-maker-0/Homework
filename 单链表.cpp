#include<stdio.h>
#include<stdlib.h>

typedef struct film{
	int name;
	struct film *next;
}node,*linklist;

linklist create(){
	linklist L;
	node *s,*r;
	int a;
	printf("�������֣�����0��������");
	scanf("%d",&a); 
	L=(node *)malloc(sizeof(node));
	L->name = a;
	s = L;
	while(a!=0){
		printf("�������֣�����0��������");
		scanf("%d",&a); 
		r = (node *)malloc(sizeof(node));
		r->name = a;
		s->next = r;
		s = r; 
	}
	r->next = NULL;
	return L;
}

int print(linklist H){
	node *s; 
	printf("������������:\t");
	s = H; 
	while(s->name!=0){
		printf("%d\t",s->name);
		s = s->next;
	}
}

int main(){
	linklist H;
	H = create();
	print(H);
}
