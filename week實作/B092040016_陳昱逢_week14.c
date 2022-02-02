#include<stdio.h>
#include<stdlib.h>

int plus(int,int);
int minus(int,int);
int multiple(int,int);
int divide(int,int);

struct member{
	char *name;
	int Age;
	int Money;
	int Debt;
};
struct linknode{
	char *name;
	int age;
	struct linknode *ptr;
};
int main(){
	printf("Exercise1------------------\n"); //Exercise 1
	int a,b;
	char c;
	printf("請輸入要執行的運算(+,-,*,/)：");
	scanf("%c",&c);
	printf("請輸入要運算的數字：");
	scanf("%d %d",&a,&b);
	if(c=='+'){
		printf("執行兩數相加函式\n");
		int (*fcn_p)(int,int),outcome;
		fcn_p = plus;
		outcome=fcn_p(a,b);
		printf("計算結果：%d\n",outcome);
	}
	else if(c=='-'){
		printf("執行兩數相減函式\n");
		int (*fcn_p)(int,int),outcome;
		fcn_p=minus;
		outcome=fcn_p(a,b);
		printf("計算結果：%d\n",outcome);
	}
	else if(c=='*'){
		printf("執行兩數相乘函式\n");
		int (*fcn_p)(int,int),outcome;
		fcn_p=multiple;
		outcome=fcn_p(a,b);
		printf("計算結果：%d\n",outcome);
	}
	else if(c=='/'){
		printf("執行兩數相除函式\n");
		int (*fcn_p)(int,int),outcome;
		fcn_p=divide;
		outcome=fcn_p(a,b);
		printf("計算結果：%d\n",outcome);
	}
	printf("Exercise2-----------------\n");//Exercise 2
	char Array1[4]={'a','b','c','d'};
	char (*Pointer1)[4]=&Array1;
	
	char Array2[3][4]={{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};
	char (*Pointer2)[3][4]= Array2;
	
	printf("陣列1的值為：%c\n",(*Pointer1)[0]);
	printf("陣列1的位址為：%p\n",&Array1[0]);
	printf("指標一指向的位址為：%p\n\n",(*Pointer1));
	
	printf("陣列2的值為：%c\n",(*Pointer2)[0][0]);
	printf("陣列2的位址為：%p\n",&Array2[0][0]);
	printf("指標二指向的位址為：%p\n\n",(*Pointer2));
	printf("Exercise3-------------------------\n");//Exercise 3
	int Array_Size_Main=20;
	int int_Array[Array_Size_Main];
	int Array_Index=0;
	
	char *text[]={"909", "1", "22", "3q3", "4444", "54321"};
	char **text2=NULL;
	
	// 雙重指標!!!! 
	text2=&text[3];
	printf("把q印出來: ");
	printf("%c", *(*text2+1));
	printf("\nExercise4-------------------------\n");//Exerciser 4
	struct data{
		char name[50];
		int score;
	};
	struct data ma;
	fflush(stdin);
	scanf("%s",&ma.name);
	scanf("%d",&ma.score);
	printf("學生姓名：%s\n",ma.name);
	printf("學生數學成績：%d\n",ma.score);
	printf("Exercise5------------------------\n");//Exercise 5
	struct data math[3];
	int k;
	for(k=0;k<3;k++){
		scanf("%s",&math[k].name);
		scanf("%d",&math[k].score);
	}
	for(k=0;k<3;k++){
		printf("學生姓名：%s\n",math[k].name);
		printf("該學生數學成績：%d\n",math[k].score);
	}
	printf("Exercise6--------------------------\n");//Exercise 6
	struct listnode{
		int num;
		struct listnode *ptr;
	};
	struct listnode node1,node2,node3;
	node1.num=58;
	node1.ptr=&node3;
	node3.num=87;
	printf("node3中num的值為：%d\n",node1.ptr->num);
	printf("Exercise7---------------------------\n");//Exercise 7
	struct member person1;
	char name1[100]; 
	printf("請輸入姓名: ");
	fflush(stdin);
	gets(name1);
	srand(time(NULL));
	assignmember(&person1, name1);
	
	printf("Exercise8------------------\n");//Exercise 8
	int i=0;
	int age=0;
	char name8[100][100];
	int put=0;
	struct linknode *head=NULL;
	struct linknode *newNode;
	struct linknode *node;
	struct linknode *temp;
	
	printf("請輸入年齡: ");
	scanf("%d", &age);
	while(age!=-1){
		printf("請輸入姓名: ");
		fflush(stdin);
		gets(name8[i]);
		newNode=(struct linknode *)malloc(sizeof(struct linknode));
		newNode->age=age;
		newNode->name=name8[i];
		newNode->ptr=NULL;
		// 判斷是否為第一個值 !!!! 
		if(!head){
			head=newNode;
		}
		else{
			put=0;
			node=head;
			//找到要插入的位置 node
			while(node->ptr!=NULL){
				if((node->ptr)->age > newNode->age && node->age < newNode->age){
					newNode->ptr=node->ptr; //
					node->ptr=newNode; //
					put=1;
					break;
				}
				node=node->ptr;
			}
			//插入的是head，所輸入的年齡比head還小 
			if(head->age > newNode->age){
				newNode->ptr=head; // 
				head=newNode; //
				put=1; // 
			}
			//插入至最後的位置 
			if(put!=1){
				node->ptr=newNode;
				newNode->ptr=NULL;
			}
		}
		++i;
		printf("\n請輸入年齡: ");
		scanf("%d", &age);
	}
	
	temp=head;
	while(temp!=NULL){
		printf("%d  %s\n", temp->age, temp->name);
		temp=temp->ptr;
	}
	
}


int plus(int x,int y){
	return x+y;
}
int minus(int x,int y){
	return x-y;
}
int multiple(int x,int y){
	return x*y;
} 
int divide(int x,int y){
	return x/y;
}
int assignmember(struct member *ptr, char* name){
	ptr->name=name;
	ptr->Age=10+rand()%51; // 10~60
	ptr->Money=150000+rand()%150001; // 150000~30000
	ptr->Debt=50000+rand()%50001; // 50000~100000
	
	printf("姓名: %s\n", ptr->name);
	printf("年齡: %d\n", ptr->Age);
	printf("存款: %d\n", ptr->Money);
	printf("債務: %d\n", ptr->Debt);
}

