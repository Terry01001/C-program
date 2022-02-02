#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	char check;
	struct node *ptr;
};
struct node *head = NULL,*tail = NULL;
void enqueue(int val,char check){
	struct node* new = malloc(sizeof(struct node));
	new->data = val;
	new->check = check;
	new->ptr = NULL;
	
	if(head == NULL){	//若queue裡為空 
		head = new;
		tail = new;
		return;
	}
	tail->ptr = new;
	tail = new;
}
struct node dequeue(void){
	struct node *temp = head;
	if(temp == NULL){
		return ;
	}
	struct node re= *temp;
	head = temp->ptr;
	return re;
}

int main(){
	int i,k=0,arr[100],sv;
	char c;
	while(scanf("%c",&c) && c!= '\n'){
		if(c!= ' ')arr[k++] = c-'0';
	}
	scanf("%d",&sv);
	for(i=0;i<k;i++){
		enqueue(arr[i],'.');
	}
	
	int cont=0;
	struct node sss;
	struct node *target = head;
	for(i=0;i<sv;i++){				//使target指到指定的struct 
		target = target->ptr;
	}
	target->check ='*';				
	
	while(1){
		sss = dequeue();
		if(sss.check == '*'){
			if(sss.data -1 == 0){
				cont++;
				break;
			}
			else{
				enqueue(sss.data -1,'*');
				cont++;
			}
			
		}
		else{
			if(sss.data -1 == 0){
				cont++;
			}
			else{
				enqueue(sss.data -1,'.');
				cont++;
			}
		}
		
	}
	printf("%d",cont);
	return 0;
}
