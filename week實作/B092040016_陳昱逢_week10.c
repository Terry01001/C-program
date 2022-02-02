#include<stdio.h>
#include<string.h>


int main(){
	int i;
	printf("Exercise1--------------\n");//Exercise 1
	char str[]="I am Groot";
	printf("%s\n",str);
	for(i=0;i<strlen(str);i++){
		printf("第%d個字元：%c\n",i,str[i]);
	}
	printf("Exercise2--------------\n");//Exercise 2
	char str2[100];
	printf("請輸入一字串：");
	scanf("%s",str2);
	for(i=1;i<=3;i++)
		printf("該字串為： %s\n",str2);
	fflush(stdin);
	char string[100];
	printf("=====================\n請輸入一字串:");
	gets(string); 
	for(i=1;i<=3;i++){
		printf("該字串為：\n");
		puts(string);
	}
	printf("Exercise3-----------------\n");//Exercise 3
	char sarr[3][100];
	printf("請輸入三字串：\n");
	for(i=0;i<3;i++){
		scanf("%s",sarr[i]);
	}
	printf("三字串為：");
	for(i=0;i<2;i++)
		printf("%s,",sarr[i]);
	printf("%s",sarr[2]);
	printf("\n反序為：");
	for(i=2;i>0;i--)
		printf("%s,",sarr[i]);
	printf("%s",sarr[0]);
	printf("\nExercise4------------------\n");//Exercise 4
	char string1[100],string2[100];
	while(1){
		printf("請輸入字串（輸入0跳出）：");
		scanf("%s",string1);
		if(string1[0]=='0')
			break;
		for(i=0;i<strlen(string1);i++){
				string2[i]=string1[strlen(string1)-1-i];
		}
		if(strcmp(string1,string2)==0)
			printf("是迴文\n"); 
		else
			printf("不是迴文\n");
	}

}
 
