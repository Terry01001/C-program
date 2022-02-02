#include<stdio.h>

int main(){
	int n,i,j;
	while(1){
		scanf("%d",&n);
		if(n>0 && n<=9)  //若輸入為個位數直接輸出 
			printf("%d\n",n);
		else if(n>9){  //輸入數為兩位數一上的部分 
			int a;
			a = n%10;  
			int sum = a;  //先將個位數放入 sum 裡面 
			for(i=1;i<10;i++){
				n/=10;  //迴圈開始先做 n=n/10 
				if(n==0)  //若此時 n 為 0 則跳出迴圈 
					break;
				else{  //若此時 n 不為 0 則加入sum裡 
					sum+=n%10;
				}
			}
			while(1){ 
				if(sum<=9) //若加總後的 sum 仍為 兩位數以上   （因為此時的 sum 最大值為 90） 
					break;
				int temp1 = sum%10;  //將個位數及十位數分別存入 temp1,temp2 
				int temp2 = sum/10;
				sum = temp1+temp2;  //將sum更新，重新檢查 
			}
			printf("%d\n",sum);
		}
		else //若輸入的數小於等於 0 則跳出迴圈 
			break;
	}
} 
