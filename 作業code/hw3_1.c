#include<stdio.h>

int main(){
	int n;
	printf("Input the number of terms :");
	scanf("%d",&n);  //將想要輸出的數字數目存入 n 
	printf("\nThe square natural up to %d terms are :",n);
	int i , sum=0; //宣告一個跑迴圈的變數 及 放入總和的變數並將初始值設為 0 
	for(i=1;i<=n;i++){
		printf("%d ",i*i);  //跑迴圈總共需要跑 n （使用者輸入）此，並印出從 1 開始的完全平方數 
		sum+=i*i;  //將每次的平方數累加 
	}
	printf("\nThe sum of Square Natural Number upto %d terms = %d",n,sum); //印出總和 
	
}
