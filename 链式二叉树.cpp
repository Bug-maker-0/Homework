#include<stdio.h>
#include<stdlib.h> 

typedef struct Node{
	char data;
	struct Node *Lchild;
	struct Node *Rchild;
}BiTNode,*BiTree;

BiTree create(){
	char a;
	BiTree Root;
	scanf("%c",&a);
	if(a=='#'){
		Root=NULL;
	}else{
		Root=(BiTree)malloc(sizeof(BiTNode));
		Root->data=a;
		Root->Lchild=create();
		Root->Rchild=create();
	}
	return Root;
}

void PreOrder(BiTree Root){
	if(Root!=NULL){
		printf("%c",Root->data);
		PreOrder(Root->Lchild);
		PreOrder(Root->Rchild);
	}
} 


void InOrder(BiTree Root){
	if(Root!=NULL){
		InOrder(Root->Lchild);
		printf("%c",Root->data);
		InOrder(Root->Rchild);
	}
} 

void PostOrder(BiTree Root){
	if(Root!=NULL){
		PostOrder(Root->Lchild);
		PostOrder(Root->Rchild);
		printf("%c",Root->data);
	}
}


int main(){
	BiTree Root; 

	Root=create();	

	PreOrder(Root);
	printf("\n");	

	InOrder(Root);
	printf("\n");

	PostOrder(Root);
	printf("\n");
}
	 
	
