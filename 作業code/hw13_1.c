#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *ptr;
};
struct node *head = NULL,*tail = NULL;
void enqueue(int val){
	struct node* new = malloc(sizeof(struct node));  //new���Ы��V�n�[�i�Ӫ���� 
	new->data = val;
	new->ptr = NULL;
	if(head == NULL){	//�Yqueue�̨S����� 
		head = new;
		tail = new;
		return;
	}
	tail->ptr = new;
	tail = new;
}
int dequeue(void){
	struct node *temp = head;	//�ŧi�@�ӼȮɪ����Ы��V�n��Xqueue����� 
	if(temp == NULL){
		return -1;
	}
	int val = temp->data;	//�n�Ǧ^�N�n��Xqueue����� 
	head = temp->ptr;
	return val;
}
int main(){
	int i,k=0,num,arr[100];
	while(1){
		scanf("%d",&num);
		if(num != 0){
			enqueue(num);	//��J��ƥ[�Jqueue�� 
		}
		else{
			arr[k] = dequeue();	//��J0�qqueue������� 
			k++;
		}
		
		if(head == NULL){	//�Yqueue�̨S��ƴN���X�j�� 
			break;
		}
	}
	for(i=0;i<k;i++){
		printf("%d\n",arr[i]);
	}
}
