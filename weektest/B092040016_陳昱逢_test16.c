#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef struct node{
	int num;
	struct node *nPtr;
}Node;
Node *top;

void push(int number){
	Node *temp;
	Node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->num=number;
	newNode->nPtr=NULL;
	
	if(!top){
		top=newNode;
	}
	else{
		newNode->nPtr=top;
		top=newNode;
	}
}
int pop(){
	Node *temp=top;
	int num=0;
	top=top->nPtr;
	num=temp->num;
	free(temp);
	return num;
}

struct cup{
	char *cup_name;
	int capacity;
};
struct cup pc;

void initial(){
	char name[50];
	printf("Input the cup name:");
	fflush(stdin);
	gets(name);
	pc.cup_name = name;
	printf("Cup name:%s\n", pc.cup_name);
	srand(time(NULL));
	pc.capacity=rand()%21 +30;//30~50ml
	printf("Capacity:%d ml\n", pc.capacity);
}
void pour(){
	srand(time(NULL));
	int pour_water=rand()%10+1;
	if(pour_water > pc.capacity){
		printf("There is no water.\n");
		return;
	}
	pc.capacity=pc.capacity - pour_water;
	printf("Cup name:%s\nCapacity:%d ml\n",pc.cup_name,pc.capacity);
}
void ren(){
	char *name;
	printf("Input the new cup name:");
	fflush(stdin);
	gets(name);
	pc.cup_name=name;
	printf("Cup name:%s\n",pc.cup_name);
	printf("Capacity:%d",pc.capacity);
}
int main(){
	printf("test1---------------------\n");//test 1
	int choice;
	while(1){
		printf("1.Initialization\n2.Pour the water\n3.Rename\n4.Exit\nOptions:");
		scanf("%d",&choice);
		switch(choice){
			case 1:initial();break;
			case 2:pour();break;
			case 3:ren();break;
			case 4:goto exit;
		}
		
	}
exit:
	printf("test2---------------------\n");//test 2
	int i=0,num1=0,num2=0,answer=0;
	char cal[100];
	printf("Input: ");
	fflush(stdin);
	gets(cal);
	while(cal[i]!='\0'){
		if(isdigit(cal[i])){
			push(cal[i]-48); //轉數字 
		}
		else{
			if(cal[i]!=' '){
				num1=pop();
				num2=pop(); 
				switch(cal[i]){
					case '+':answer=num2+num1;break;
					case '-':answer=num2-num1;break;
					case '*':answer=num2*num1;break;
					case '/':answer=num2/num1;break;
					default :break;
				}
				push(answer);  
			}	
		}
		++i;
	}
	printf("Output: %d\n", answer);
	
	printf("test3------------------------\n");//test 3
	int m,arr[5],temp ;
	printf("位移數(<5)：");
	scanf("%d",&m);
	printf("請輸入5個整數：");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]); 
	int *ptr=&arr;
	temp=*(ptr+m);
	*(ptr+m)=*ptr;//1
	for(i=0;i<5;i++){
		if((i+m)%5==0)
			break;
	}
	*ptr=*(ptr+i);//2
	if(i<m){
		int j;
		for(j=0;j<5;j++){
			if((j+i)%5==0)
				break;
		}
	*(ptr+i)=*(ptr+j);
	}
	else
		*(ptr+i)=*(ptr+i-2);//3
	if(i-2<m){
		int k;
		for(k=0;k<5;k++){
			if((k+i-2)%5==0)
				break;
		}
	*(ptr+i-2)=*(ptr+k);
	}
	else
		*(ptr+i-2)=*(ptr+i-4);//4
	if(i-4<m){
		int l;
		for(l=0;l<5;l++){
			if((l+i-4)%5==0)
				break;
		}
	*(ptr+i-4)=*(ptr+l);
	}
	else
		*(ptr+i-4)=*(ptr+i-6);//5
		
	*(ptr+((m+2)%5))=temp;//6
	
	printf("位移後：%d %d %d %d %d ",*ptr,*(ptr+1),*(ptr+2),*(ptr+3),*(ptr+4)); 
	printf("\ntest4----------------------\n");
	int n;
	printf("Input n:");
	scanf("%d",&n);
}
