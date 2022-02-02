#include<stdio.h>
 int main(){
 	printf("Exercise 1.1-----------\n");  //Exercise 1.1
 	float a;  //宣告一個浮點數形態的變數 a
 	printf("請輸入攝氏溫度：");
	scanf("%f",&a);  //取得在鍵盤上的輸入，且取得的輸入資料形態為浮點數 
	a=a*9/5+32;  //攝氏轉華氏的公式 
	printf("華氏溫度為：%f\n",a); 
	
	
 } 
