#include<stdio.h>
int main(){
	printf("Exercise 1------------------\n");//Exercise 1
	int a=5;
	float b=3.14;
	char c = 'D';
	printf("�ګŧi������ܼƭȬ�:%d\n",a);
	printf("�ګŧi���B�I���ܼƭȬ�:%f\n",b);
	printf("�ګŧi���r���ܼƭȬ�: %c\n",c);
	
	printf("Exercise 2-------------------\n");//Exercise 2
	int n1=123;
	float f1=123.4567;
	double f2=123.4567;
	printf("���n1:%d\n-------------\n",n1);
	printf("%%8d  ���G�G%8d\n",n1);
	printf("%%.8d ���G�G%.8d\n",n1);
	printf("%%06d ���G�G%06d\n----------------------�ڬO���j�u-----------------------\n",n1);
	printf("���ׯB�I��f1:%f\n",f1);
	printf("����ׯB�I��f2:%f\n-------------\n",f2);
	printf("%%.4f   ���G�G%.4f\n",f1);
	printf("%%10.4f ���G�G%10.4f\n",f1);
	printf("%%lf    ���G�G%lf\n",f2);
	
	printf("Exercise 3---------------------\n");//Exercise 3
	int a1=6, a2=9;
	printf("a1 = %d\na2 = %d\n",a1,a2);
	printf("��Ƥ��M�G%d\n",a1+a2);
	printf("��Ƥ��n�G%d\n",a1*a2) ;
	
	printf("Exercise 4----------------------\n");//Exercise 4
	char c1;
	printf("��J�@�r���G");
	scanf("%c",&c1);
	printf("\n����J�F %c �r��\n",c1);
	
	printf("Exercise 5----------------------\n");//Exercise 5 
	printf("�w��Ө����t�ΡI\n");
	int price, amount, money;
	printf("1.��J����G\n");
	scanf("%d",&price); 
	printf("2.��J�ƶq�G\n");
	scanf("%d",&amount);
	printf("3.�`���G%d ��\n",price*amount);
	printf("4.��J��I���B�G\n");
	scanf("%d",&money);
	printf("=================\n5.��s�G%d ��\n",money-price*amount);
	int change = money-price*amount;
	printf("***����r���p�U�G\n");
	printf("1. 500 ���G%d �i\n",change/500);
	printf("2. 100 ���G%d �i\n",change%500/100);
	printf("3. 50 ���G%d �T\n",change%500%100/50);
	printf("4. 10 ���G%d �T\n",change%500%100%50/10);
	printf("5. 5 ���G%d �T\n",change%500%100%50%10/5);
	printf("6. 1 ���G%d �T\n",change%500%100%50%10%5);
	
	printf("Exercise 6------------------------\n");//Exercise 6
	int i =32767;
	short int s =32767;
	printf("���i = %d\n",i);
	printf("�u���s = %d\n",s);
	printf("i+1= %d\n",i+1);
	printf("s+1= %hd",s+1);
}
