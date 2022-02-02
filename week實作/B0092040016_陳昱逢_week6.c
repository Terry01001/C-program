#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Exercise 1------------------\n");//Exercise 1
	int n;
	printf("請輸入一個次數：");
	scanf("%d",&n); 
	int i;
	for(i=1;i<=n;i++){
		printf("I am Groot!\n");
	}
	printf("Exercise 2-----------------\n");//Exercise 2
	int rnum;
	srand(time(NULL));
	int k;
	for(k=1;k<=5;k++){
		rnum=rand() % 100 + 1;
		printf("%d\n",rnum); 
	}
	printf("Exercise 3------------------\n");//Exercise 3
	int a,j;
	for(a=1;a<=5;a++){
		for(j=1;j<=a;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("Exercise 4------------------\n");//Exercise 4
	int r1num;
	srand(time(NULL));
	int b;
	for(b=1;b<=1000;b++){
		r1num=rand() % 10 + 1;
		if (r1num!=7){
			printf("你抽到的號碼：%d 不是 7 號，請重抽\n",r1num);
		}
		else{
			printf("你抽到7號了，停止抽號碼\n") ;
			break;
		}
	}
	printf("Exercise 5--------------------\n");//Exercise 5
	int r2num;
	srand(time(NULL));
	r2num=rand() % 10 +1;
	printf("抽到亂數為 %d\n",r2num);
	int c,d;
	for(c=1;c<=r2num;c++){
		for(d=1;d<=r2num;d++){
			printf("*");
		}
		printf("\n");
	}
	printf("Exercise 6----------------------\n");//Exercise 6
	int e,m;
	int sum = 0;
	for(m=1;m<=1000;m++){
		printf("請輸入數字：");
		scanf("%d",&e);
		if(e!=0){
			sum+=e;
		}
		else{
			break;
		}
	}
	printf("總和為: %d\n",sum);
}
