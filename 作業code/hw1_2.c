#include<stdio.h>

int main(){
	printf("Exercise 1.2------------\n");  //Exercise 1.2
	float b,c;  //宣告兩個浮點數形態的變數 b , c 
	printf("請輸入兩個數：\n");
	scanf("%f",&b);  //取得在鍵盤上輸入的第一個數字 
	scanf("%f",&c);  //取得在鍵盤上輸入的第二個數字 
	printf("兩數相加為：%f\n",b+c);
	printf("兩數相減為：%f\n",b-c);  //分別對兩個數字進行加減乘除的運算 
	printf("兩數相乘為：%f\n",b*c);
	printf("兩數相除為：%f\n",b/c);
}
