#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *ptr;
};
struct node *head = NULL,*tail = NULL;
void enqueue(int val){
	struct node* new = malloc(sizeof(struct node));  //new指標指向要加進來的資料 
	new->data = val;
	new->ptr = NULL;
	if(head == NULL){	//若queue裡沒有資料 
		head = new;
		tail = new;
		return;
	}
	tail->ptr = new;
	tail = new;
}
int dequeue(void){
	struct node *temp = head;	//宣告一個暫時的指標指向要丟出queue的資料 
	if(temp == NULL){
		return -1;
	}
	int val = temp->data;	//要傳回將要丟出queue的資料 
	head = temp->ptr;
	return val;
}
int main(){
	int i,k=0,num,arr[100];
	while(1){
		scanf("%d",&num);
		if(num != 0){
			enqueue(num);	//輸入資料加入queue中 
		}
		else{
			arr[k] = dequeue();	//輸入0從queue拿取資料 
			k++;
		}
		
		if(head == NULL){	//若queue裡沒資料就跳出迴圈 
			break;
		}
	}
	for(i=0;i<k;i++){
		printf("%d\n",arr[i]);
	}
}
