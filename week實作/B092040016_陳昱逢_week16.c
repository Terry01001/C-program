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
//	printf("�п�J�m�W�G");
//	fflush(stdin);
//	scanf("%s",&s1.name);
//	printf("�п�J�ƾǦ��Z�G");
//	scanf("%d",&s1.mscore) ;
//	printf("�п�J�^�妨�Z�G");
//	scanf("%d",&s1.escore);
//	
//	printf("�п�J�m�W�G");
//	fflush(stdin);
//	scanf("%s",&s2.name) ;
//	printf("�п�J�ƾǦ��Z�G");
//	scanf("%d",&s2.mscore);
//	printf("�п�J�^�妨�Z�G");
//	scanf("%d",&s2.escore) ; 
//	
//	printf("�п�J�m�W�G");
//	fflush(stdin);
//	scanf("%s",&s3.name) ;
//	printf("�п�J�ƾǦ��Z�G");
//	scanf("%d",&s3.mscore);
//	printf("�п�J�^�妨�Z�G");
//	scanf("%d",&s3.escore) ; 
//	
//	printf("1.%s����%f��\n",s1.name,(s1.mscore + s1.escore)/2.0);
//	printf("2.%s����%f��\n",s2.name,(s2.mscore + s2.escore)/2.0);
//	printf("3.%s����%f��\n",s3.name,(s3.mscore + s3.escore)/2.0);
	
	printf("Exercise2------------------------\n");
	int i;
	int *p1=(int*)malloc(sizeof(int[3]));
	printf("�п�J�Ĥ@�ӼơG");
	scanf("%d",p1);
	printf("�п�J�ĤG�ӼơG");
	scanf("%d",p1+1);
	printf("�п�J�ĤT�ӼơG");
	scanf("%d",p1+1+1);
	for(i=0;i<3;i++){
		printf("��%d���Ƭ�%d\n",i+1,*(p1+i));
	}
	free(p1); 
} 
