#include<stdio.h>
#include<stdlib.h>
#define Size 50
#define Qsize 8
//circular queue
int queue[Qsize];
int head,tail;

void displayc(){
	int i;
	printf("�ثequeue������ơG");
	for(i=(head+1)%Qsize;i!=(tail+1)%Qsize;){
		printf("%3d",queue[i]);
		i++;
		i%=Qsize;
	}
	printf("\n"); 
}
void init(){head = tail = -1;}
int isFull(){
	if(((tail+1)%Qsize)==head||(tail==Qsize-1&&head<=0)){
		printf("��C�w��");
		return 1;
	}
	return 0;
}
int isEmpty(){
	if(head%Qsize==tail%Qsize){
		printf("��C�w��");
		return 1; 
	}
	return 0;
}
void inqueuec(){
	int d;
	if(!isFull()){
		printf("�п�J���");
		scanf("%d",&d);
		tail++;
		tail%=Qsize;
		queue[tail]=d;
	}
	displayc();
}
void dequeuec(){
	if(!isEmpty()){
		head++;
		head%=Qsize;
		printf("�R����� %d\n",queue[head]);
	}
	displayc();
}

void release(){
	int i;
	for(i=(head+1)%Qsize;i!=(tail+1)%Qsize;){
		queue[i]=-1;
		i++;
		i%=Qsize;
	}
}
//Stack
int stack[Size];
int top=0;
//linked list
struct node{
	int num;
	struct node *next;
};
struct linkedlist{
	struct node *head,*tail;
};
typedef struct node Node;

void inqueue(struct linkedlist *q){
	int value;
	Node *temp = (struct node*) malloc(sizeof(struct node));
	
	printf("�п�J��ơG");
	scanf("%d",&value);
	temp->num=value;
	temp->next=NULL;
	if(q->tail==NULL){
		q->head=q->tail=temp;
		display(q);
		return;
	}
	q->tail->next=temp;
	q->tail=temp;
	
	display(q); 
}
void dequeue(struct linkedlist *q){
	if(q->head=NULL){
		printf("��C�w��\n");
		return; 
	}
	else{
		Node *temp=(struct node*)malloc(sizeof(struct node));
		temp=q->head;
		
		if(q->head==NULL)
			q->tail=NULL;
		printf("�R����� %d\n",q->head->num);
		q->head=q->head->next; 
	}
	display(q);
}
void display(struct linkedlist *q){
	printf("�ثequeue������ơG");
	Node *temp=(struct node*)malloc(sizeof(struct node));
	temp=q->head;
	while(1){
		printf("%3d",temp->num);
		temp=temp->next;
		if(temp==NULL)
			break;
	}
	printf("\n"); 
}

int push(int n){
	if(top<Size){
		stack[top]=n;
		top++;
		return 0;
	}
	else
		return -1;
}
int pop(){
	int k;
	if(top>0){
		top--;
		k=stack[top];
		return k;
	}
	else{
		printf("���|�w��\n");
		return -1;
	}
}
int pushc(char n){
	if(top<Size){
		stack[top]=n;
		top++;
		return 0;
	}
	else
		return -1;
}
char popc(){
	char k;
	if(top>0){
		top--;
		k=stack[top];
		return k;
	}
	else{
		printf("���|�w��\n");
	}
}


int main(){
	printf("exercise1------------------\n");
	struct linkedlist *myqueue =(struct linkedlist*)malloc(sizeof(struct linkedlist));
	myqueue->head=myqueue->tail=NULL;
	int choice;
	while(1){
		printf("(1)�s�W\n(2)�R��\n(3)����\n:");
		scanf("%d",&choice);
		if(choice==3) break;
		switch(choice){
			case 1:	inqueue(myqueue); break;
			case 2: dequeue(myqueue); break;
			case 3: break;
			default: display(myqueue); break;
		}
	}
	printf("exercise2-----------------------\n");//exercise2
	int choice2;
	while(1){
		printf("(1)�s�W\n(2)�R��\n(3)����\n:");
		scanf("%d",&choice2);
		if(choice2==3)
			break;
		switch(choice2){
			case 1:	inqueuec(); break;
			case 2: dequeuec(); break;
			case 3:  break;
			default: displayc(); break;
		}
	}
	printf("����Ŷ��G\n");
	release();
	 
	printf("exercise3------------------------\n");//exercise3
	int i,num;
	
	printf("�Ш̧ǿ�J5����ƶi�J���|�G");
	for(i=0;i<5;i++){
		scanf("%d",&num);
		push(num);
	}
	printf("===========================\n");
	for(i=1;i<=5;i++){
		printf("���|�u�X�����Ǭ��G%d\n",pop());
	}
	pop();
	printf("exercise4--------------------------\n");
	char str[Size];
	fflush(stdin);
	scanf("%s",str);
	if((strlen(str) %2 )!= 0)
		printf("�t�藍���\\n");
	else{
		for(i=0;i<Size;i++){
			if(str[i]=='\0')
				break;
			if(str[i]!='}'&&str[i]!=']'&&str[i]!=')'){
				pushc(str[i]);
			}
			else{//�J��k��t�C 
				if((popc())!=str[i])
					printf("�t�藍���\\n");
				else
					printf("�t�令�\\n"); 
			}
		}
	} 
}
