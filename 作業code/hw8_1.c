#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,count=0;
	char c,a;
	FILE *fp=fopen("random.txt","w");//打開檔案 模式為寫入 
	srand(time(NULL));
	for(i=1 ; i<=1000 ; i++){//利用 ASCII 值來表示大寫以及小寫的英文字母 
		c=rand() % 58 + 65;//隨機產生一整數介於 65~122 之間 
    	while(c >= 91 && c <= 96){//如果產生的數字對應到在 91~96 之間則再重新產生一次，直到不在這個區間裡面為止，因為91~96的ASCII值不代表大小寫的英文字母 
   		c=rand() % 58 +65;
  		}
  		fprintf(fp,"%c",c);//以字元的形式寫入檔案 
 	}
 	fclose(fp);//關閉檔案 
 	while(1){
  		FILE *fp1=fopen("random.txt","r");//打開檔案 模式為讀取 
  		printf("請輸入要尋找的字元：");
  		scanf("%c",&a);
  		fflush(stdin);
  	if(a=='*'){//輸入 * 則結束 
   		printf("結束尋找\n"); 
   		break;
	}
  	else if((a>=65&&a<=90)||(a>=97&&a<=122)){ 
  		while ((c=getc(fp1)) != EOF) {//對每個字元進行讀取比較 
   			c=getc(fp1);
   			if(c==a)//如果與所要求的字元相等，則計數加 1 
    			count++;
  		}
  		printf("字元\'%c\'一共找到：%d\n",a,count);
  		count=0;//重設 count 
  		fclose(fp1);//關閉檔案
  	}
  	else
  		printf("輸入錯誤，再試一次。\n"); 
 	}
}
