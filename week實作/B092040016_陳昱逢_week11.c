#include<stdio.h>
#include<stdlib.h>

int factor(int,int);
int multiple(int,int);
int myswitch(int,int);
int factorial(int);
int c,d;//交換用兩變數   全域變數 

int main(){
	printf("Exercise 1-----------------\n");//Exercise 1
	FILE *File_Pointer;
	char String_In_File1[15],String_In_File2[15],String_In_File3[15],String_In_File4[15],String_In_File5[15],String_In_File6[15];
	char String_In_File[40],str[]= "";
	int Data_Length=40,Read_Data_Times=1;
	char Char_In_File = NULL;
	
	printf("用 getc()讀取檔案：\n"); //getc()
	File_Pointer = fopen(".\\data.txt","r"); //打開檔案
	if(File_Pointer == NULL){
		printf("File doesn't exist.");
		return 1;
	}
	else{
		do{
			Char_In_File = getc(File_Pointer);
			printf("%c",Char_In_File);
		}while(Char_In_File != EOF);
	}
	fclose(File_Pointer);
	 
	printf("\n\n用 fscanf()讀取檔案：\n"); //fscanf()
	File_Pointer=fopen(".\\data.txt","r");
	fscanf(File_Pointer,"%s %s %s %s %s %s",String_In_File1,String_In_File2,String_In_File3,String_In_File4,String_In_File5,String_In_File6);
	printf("%s %s %s \n%s %s %s",String_In_File1,String_In_File2,String_In_File3,String_In_File4,String_In_File5,String_In_File6);
	fclose(File_Pointer);
	
	
	printf("\n\n用 fgets()讀取檔案：\n");//fgets()
	File_Pointer=fopen(".\\data.txt","r");
	do{
		fgets(String_In_File,Data_Length,File_Pointer);
		printf("%s",String_In_File);
		}while(fgets(String_In_File,Data_Length,File_Pointer)!=NULL);
	fclose(File_Pointer);
		
	printf("\n\n用 fread()讀取檔案：\n");//fread()
	File_Pointer=fopen(".\\data.txt","r");
	do{
		fread(str,50,Read_Data_Times,File_Pointer);
		printf("%s",str);
	}while(!feof(File_Pointer));
	fclose(File_Pointer);
	
	printf("\nExercise2-------------------\n");//Exercise 2
	File_Pointer=fopen(".\\data.txt","a");
	fputs("\nMy output is simple.",File_Pointer);
	fclose(File_Pointer);
	
	printf("Exercise3--------------------\n");//Exercise 3
	FILE *fp;
	char name[50],ph[50],ad[50];
	while(1){
		fp=fopen("phone.txt","a+");
		printf("姓名：");
		fflush(stdin);
		scanf("%s",name);
		if(name[0]=='-')
			break;
		printf("電話：");
		fflush(stdin);
		scanf("%s",ph);
		printf("地址：");
		fflush(stdin);
		scanf("%s",ad);
		printf("====================\n");
		fputs("姓名：",fp);
		fputs(name,fp);
		fputs("\t",fp);
		fputs("電話：",fp);
		fputs(ph,fp);
		fputs("\t",fp);
		fputs("地址：",fp);
		fputs(ad,fp);
		fputs("\n",fp); 
		fclose(fp);
	}

	
	printf("Exercise4--------------------\n");//Exercise 4
	int number;
	printf("輸入一個數字算階乘："); 
	scanf("%d",&number);
	printf("%d 階乘為：%d\n",number,factorial(number));
	
	printf("Exercise5--------------------\n");//Exercise 5
	int num1,num2;
	printf("請輸入兩個數字：");
	scanf("%d %d",&num1,&num2);
	printf("%d %d最大公因數為：%d\n",num1,num2,factor(num1,num2));
	printf("%d %d最小公倍數為：%d\n",num1,num2,multiple(num1,num2));

	printf("Exercise6--------------------\n");//Exercise 6
	c=2,d=3;
	myswitch(c,d);
	printf("c=%d , d=%d",c,d);
}
int factor(int num1,int num2){
	int min=num1,i,a=1;
	if(num2<min)
		min=num2;
	for(i=1;i<=min;i++){
		if(num1%i==0 && num2%i==0){
			a=i;
		}
	}
	return a;
}

int multiple(int num1,int num2){
	int b;
	b=factor(num1,num2)*(num1/factor(num1,num2))*(num2/factor(num1,num2));
	return b;
}

int factorial(int n){
	int j;
	int product=1;
	for(j=1;j<=n;j++)
		product*=j;
	return product;
}

int myswitch(x,y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	c=x;
	d=y;
}
