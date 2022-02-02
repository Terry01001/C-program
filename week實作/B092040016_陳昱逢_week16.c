#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student{
	char name[50];
	int mscore;
	int escore;
	float avscore;
};
typedef struct student stu;
stu s1,s2,s3;
int main(){
//	printf("Exercise1--------------\n");
//	printf("請輸入姓名：");
//	fflush(stdin);
//	scanf("%s",&s1.name);
//	printf("請輸入數學成績：");
//	scanf("%d",&s1.mscore) ;
//	printf("請輸入英文成績：");
//	scanf("%d",&s1.escore);
//	
//	printf("請輸入姓名：");
//	fflush(stdin);
//	scanf("%s",&s2.name) ;
//	printf("請輸入數學成績：");
//	scanf("%d",&s2.mscore);
//	printf("請輸入英文成績：");
//	scanf("%d",&s2.escore) ; 
//	
//	printf("請輸入姓名：");
//	fflush(stdin);
//	scanf("%s",&s3.name) ;
//	printf("請輸入數學成績：");
//	scanf("%d",&s3.mscore);
//	printf("請輸入英文成績：");
//	scanf("%d",&s3.escore) ; 
//	
//	printf("1.%s平均%f分\n",s1.name,(s1.mscore + s1.escore)/2.0);
//	printf("2.%s平均%f分\n",s2.name,(s2.mscore + s2.escore)/2.0);
//	printf("3.%s平均%f分\n",s3.name,(s3.mscore + s3.escore)/2.0);
	
	printf("Exercise2------------------------\n");
	int i;
	int *p1=(int*)malloc(sizeof(int[3]));
	printf("請輸入第一個數：");
	scanf("%d",p1);
	printf("請輸入第二個數：");
	scanf("%d",p1+1);
	printf("請輸入第三個數：");
	scanf("%d",p1+1+1);
	for(i=0;i<3;i++){
		printf("第%d的數為%d\n",i+1,*(p1+i));
	}
	free(p1); 
} 
