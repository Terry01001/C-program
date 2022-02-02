#include<stdio.h>
int main(){
	printf("Exercise 1------------------\n");//Exercise 1
	int a=5;
	float b=3.14;
	char c = 'D';
	printf("我宣告的整數變數值為:%d\n",a);
	printf("我宣告的浮點數變數值為:%f\n",b);
	printf("我宣告的字元變數值為: %c\n",c);
	
	printf("Exercise 2-------------------\n");//Exercise 2
	int n1=123;
	float f1=123.4567;
	double f2=123.4567;
	printf("整數n1:%d\n-------------\n",n1);
	printf("%%8d  結果：%8d\n",n1);
	printf("%%.8d 結果：%.8d\n",n1);
	printf("%%06d 結果：%06d\n----------------------我是分隔線-----------------------\n",n1);
	printf("單精度浮點數f1:%f\n",f1);
	printf("雙精度浮點數f2:%f\n-------------\n",f2);
	printf("%%.4f   結果：%.4f\n",f1);
	printf("%%10.4f 結果：%10.4f\n",f1);
	printf("%%lf    結果：%lf\n",f2);
	
	printf("Exercise 3---------------------\n");//Exercise 3
	int a1=6, a2=9;
	printf("a1 = %d\na2 = %d\n",a1,a2);
	printf("兩數之和：%d\n",a1+a2);
	printf("兩數之積：%d\n",a1*a2) ;
	
	printf("Exercise 4----------------------\n");//Exercise 4
	char c1;
	printf("輸入一字元：");
	scanf("%c",&c1);
	printf("\n剛剛輸入了 %c 字元\n",c1);
	
	printf("Exercise 5----------------------\n");//Exercise 5 
	printf("歡迎來到找錢系統！\n");
	int price, amount, money;
	printf("1.輸入單價：\n");
	scanf("%d",&price); 
	printf("2.輸入數量：\n");
	scanf("%d",&amount);
	printf("3.總價：%d 元\n",price*amount);
	printf("4.輸入支付金額：\n");
	scanf("%d",&money);
	printf("=================\n5.找零：%d 元\n",money-price*amount);
	int change = money-price*amount;
	printf("***應找鈔票如下：\n");
	printf("1. 500 元：%d 張\n",change/500);
	printf("2. 100 元：%d 張\n",change%500/100);
	printf("3. 50 元：%d 枚\n",change%500%100/50);
	printf("4. 10 元：%d 枚\n",change%500%100%50/10);
	printf("5. 5 元：%d 枚\n",change%500%100%50%10/5);
	printf("6. 1 元：%d 枚\n",change%500%100%50%10%5);
	
	printf("Exercise 6------------------------\n");//Exercise 6
	int i =32767;
	short int s =32767;
	printf("整數i = %d\n",i);
	printf("短整數s = %d\n",s);
	printf("i+1= %d\n",i+1);
	printf("s+1= %hd",s+1);
}
