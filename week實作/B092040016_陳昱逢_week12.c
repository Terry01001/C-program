#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PI 3.1415926
#define area(n) (n)*(n)*PI

void show(int arr[],int);
int main(){
	printf("Exercise1---------------\n");
	int n;
	printf("�п�J�ꪺ�b�|�G");
	scanf("%d",&n);
	printf("���n���G%f\n",area(n));
	printf("Exerise2-----------------\n");//Exercise2
	int len;
	printf("�п�J�}�C����:");
	scanf("%d",&len);
	int a[len],i;
	srand(time(NULL));
	for(i=0;i<len;i++)
		a[i]=rand()%100+1;
	show(a,len);
	printf("Exercise3------------------\n");//Exercise3
	int num;
	printf("�п�J�@�Ӿ�ơG");
	scanf("%d",&num);
	printf("�ƦC���G"); 
	for(i=1;i<=num;i++)
		printf("%3d",fiobnacci(i));
	printf("\n");
	printf("Exercise4------------------\n");//Exercise4
	int number,ex;
	printf("�п�J���:");
	scanf("%d %d",&number,&ex);
	printf("%d^%d = %d",number,ex,power(number,ex));
}

void show(int arr[],int k){
	int i;
	for(i=0;i<k;i++)
		printf("%4d",arr[i]);
	printf("\n");
}

int fiobnacci(int n){
	if(n<=2)
		return 1;
	else
		return fiobnacci(n-1)+fiobnacci(n-2);
}

int power(int x,int c){
	if(c==0)
		return 1;
	else
		return x*power(x,c-1);
}
