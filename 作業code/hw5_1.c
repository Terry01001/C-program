#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char str[1000001];
	int i,j,op=0;
	while(scanf("%s",str) && str[0]!='.'){ //輸入 . 就跳出迴圈
		for (i=1;i<=strlen(str);i++){ //可視 i 為子字串的長度 
			if(strlen(str)% i ==0){  //判斷子字串長度排列幾次是否為原字串的長度 
				for(j=0;j<strlen(str);j++){
					if(str[j]==str[j%i]){  //長度符合則看內容物是否相等 
						op=strlen(str)/i;
					}
					else{
						op=0;
						break; //若有一內容物不相等則跳出迴圈，重設op值 
					}
				}
			}
			if(op!=0)//由於執行完op必定大於1，因此跳出迴圈印出op值 
				break;
		}
		printf("%d\n",op);
	}

} 
