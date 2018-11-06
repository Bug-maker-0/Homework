#include<stdio.h>
#include<stdlib.h> 
typedef struct Node{
	int id;
	int code;
	struct Node *next;
}Node,*linklist;
 
linklist Yue(int n,int m){
	linklist H;
	linklist d,x;
	int i;
	H= (linklist)malloc(sizeof(Node));
	H->id=i;
	scanf("%d",H->code);
	d=H;
	while(i<n)
	{
		i++;
		x=(linklist)malloc(sizeof(Node));
		x->id=i;
		scanf("%d",x->code);
		d->next = x;
		d = x;	
	}
	d->next=H;
	
	x=H->next;
	d=H;
	while(d->next!=d){
		for(i=1;i<=m;i++)
		{
			d=x;
			x=x->next;
		} 
		printf("%d ",x->id);
		d->next = x->next;
		m=x->code;
		free(x);
		x=d->next;
	}
	printf("%d",x->id);
	free(x);
}



int main(){
	linklist H;
	int n,m;
	scanf("%d %d",&n,&m);
	H=Yue(n,m);	
}
