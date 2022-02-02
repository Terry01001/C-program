#include<stdio.h>

int main(){
	int a,b,c;   //宣告三個整數變數a,b,c 
	printf("請隨意輸入三不同整數 a b c:\n");
	printf("a 為 ");
	scanf("%d",&a);
	printf("b 為 ");
	scanf("%d",&b);                 //分別將鍵盤輸入的值存入變數 a,b,c 
	printf("c 為 ");                //第一個輸入值存入a, 第二個輸入值存入b, 第三個輸入值存入c 
	scanf("%d",&c);
	
	//先判斷 a,b 的大小關係 總共分為 a>b, a<b ,a=b 三種情況
	if(a > b){       //第一個情況 a>b 
		if(a > c){                      //在 a>b 情況下，a 又大於 c 
			printf("a is the largest");
		}
		else if(a < c){                 //在a>b 情況下，a 小於 c
			printf("c is the largest");
		}
		else                            //在a>b 情況下，a 等於 c 
			printf("a , c is the largest");
	}
	else if(a < b){  //第二個情況 a<b 
		if(b > c){                     //在 a<b 情況下，b 又大於 c
			printf("b is the largest");
		}
		else if(b < c){                //在 a<b 情況下，b 小於 c
			printf("c is the largest");
		}
		else                           //在 a<b 情況下，b 等於 c
			printf("b , c is the largest");
	}
	else{            //第三個情況 a=b 
		if(a > c){                     //在 a=b 情況下，a 大於 c 
			printf("a , b is the largest");
		}
		else if(a < c){                //在 a=b 情況下，a 小於 c
			printf("c is the largest");
		}
		else                           //在 a=b 情況下，a 等於 c
			printf("a,b,c is the largest");
	}
	
} 
