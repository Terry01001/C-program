#include<stdio.h>
#include<math.h>
int main(){
	printf("Exercise 1-------------------\n");//Ecercise 1
	float r1=0.0345;
	double r2=0.0345;
	float f=(4.0/3.0)*3.14*r1*r1*r1;
	double d=(4.0/3.0)*3.14*r2*r2*r2;
	printf("��nf�G%f\n",f);
	printf("��nd:%lf\n",d);
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
	printf("�L�X���榡�p�U�G%+09.4f\n",num2);
	printf("Exercise 5-------------------\n");//Exercise 5
	int a;
	char b; 
	printf("�п�J�@�Ӿ�ơG\n");
	scanf("%d",&a) ;
	printf("�п�J�@�Ӧr���G\n");
	fflush(stdin);
	scanf("%c",&b);
	printf("�ڦ� %d �� %c",a,b);
	printf("\nExercise 6-------------------\n");//Exercise 6
	int s;
	printf("�п�J�@�ӼƦr�G");
	scanf("%d",&s);
	printf("\n---------------------------\n%d ���H 13 ���ӼƬ� %d ,�l�Ƭ� %d",s,s/13,s%13); 
	printf("\nExercise 7-------------------\n");//;Exercise 7
	float k;
	printf("�п�J�@�ӼƦr�G");
	scanf("%f",&k);
	if (k>=60){
		printf("�Ӥ��� %f ���ή�\n",k); 
	}
	else{
		printf("�Ӥ��� %f �����ή�\n",k); 
	}
} 
