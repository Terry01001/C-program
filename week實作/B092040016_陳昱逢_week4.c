#include<stdio.h>
#include<math.h>
int main(){
	printf("Exercise 1-------------------\n");//Ecercise 1
	float r1=0.0345;
	double r2=0.0345;
	float f=(4.0/3.0)*3.14*r1*r1*r1;
	double d=(4.0/3.0)*3.14*r2*r2*r2;
	printf("體積f：%f\n",f);
	printf("體積d:%lf\n",d);
	printf("Exercise 2-------------------\n");//Exercise 2
	char let;
	printf("Input a letter:");
	scanf("%c",&let);
	printf("ASCII code of %c is %d",let,let);
	printf("\nExercise 3-------------------\n");//Exercise 3
	int num =123;
	printf("Size of num is \\%d bytes\\ \n",sizeof(num));
	printf("Exercise 4-------------------\n");//Exercise 4
	float num2=52.782;
	printf("印出的格式如下：%+09.4f\n",num2);
	printf("Exercise 5-------------------\n");//Exercise 5
	int a;
	char b; 
	printf("請輸入一個整數：\n");
	scanf("%d",&a) ;
	printf("請輸入一個字母：\n");
	fflush(stdin);
	scanf("%c",&b);
	printf("我有 %d 個 %c",a,b);
	printf("\nExercise 6-------------------\n");//Exercise 6
	int s;
	printf("請輸入一個數字：");
	scanf("%d",&s);
	printf("\n---------------------------\n%d 除以 13 的商數為 %d ,餘數為 %d",s,s/13,s%13); 
	printf("\nExercise 7-------------------\n");//;Exercise 7
	float k;
	printf("請輸入一個數字：");
	scanf("%f",&k);
	if (k>=60){
		printf("該分數 %f 為及格\n",k); 
	}
	else{
		printf("該分數 %f 為不及格\n",k); 
	}
} 
