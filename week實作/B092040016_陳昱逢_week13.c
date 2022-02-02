#include<stdio.h>
#include<stdlib.h>

void f(int*,int*,int*);

int main(){
	printf("Exercise1---------------\n");//Exercise 1
	int a=500;
	printf("Value of a = %d\n",a);
	printf("Address of a = %p\n",&a);
	printf("Value of Address \'a\' = %d\n",*&a);
	printf("Exercise2----------------\n");//Exercise 2
	int x,b;
	int *p1=&x,*p2=&b;
	printf("n1:");
	scanf("%d",&x);
	printf("n2:");
	scanf("%d",&b);
	printf("n1的位址：%p\n",&x);
	printf("n2的位址：%p\n",&b);
	printf("%d x %d = %d\n",*p1,*p2,*p1 * *p2);
	printf("Exercise3----------------\n");//Exercise 3
	int n1,n2,n3;
	printf("請輸入三變數（eg. 3 1 2):");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	printf("n3 = %d\n",n3);
	printf("三數由小排到大：\n");
	
	f(&n1,&n2,&n3);
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	printf("n3 = %d\n",n3);
	printf("Exercise4----------------\n");//Exercise 4
	char arr[]={'a','b','c','d','e'};
	char *pointer=arr; 
	printf("陣列1的值為：%c\n",*pointer);
	printf("陣列1的位址為：%p\n",&arr[0]);
	printf("指標一指向的位址為：%p\n\n",pointer);
	
	printf("陣列2的值為：%c\n",*(pointer+1));
	printf("陣列2的位址為：%p\n",&arr[1]);
	printf("指標二指向的位址為：%p\n\n",pointer+1);
	
	printf("陣列3的值為：%c\n",*(pointer+2));
	printf("陣列3的位址為：%p\n",&arr[2]);
	printf("指標三指向的位址為：%p\n\n",pointer+2);
	
	printf("陣列4的值為：%c\n",*(pointer+3));
	printf("陣列4的位址為：%p\n",&arr[3]);
	printf("指標四指向的位址為：%p\n\n",pointer+3);
	
	printf("陣列5的值為：%c\n",*(pointer+4));
	printf("陣列5的位址為：%p\n",&arr[4]);
	printf("指標五指向的位址為：%p\n\n",pointer+4); 
	
	printf("Exercise5----------------\n");//Exercise 5
	char str[100];
	char (*p_a)[]=str;
	int i;
	printf("輸入字串：");
	fflush(stdin); 
	gets(str);
	for(i=strlen(str)-1;i>=0;i--){
		printf("%c",(*p_a)[i]);
	}
}
void f(int *i,int *j,int *k){
	int swap;
	if(*i < *j){
		if(*j < *k){
		}
		else{
			swap=*j;
			*j=*k;
			*k=swap;
			if(*i<*j){
			}
			else{
				swap=*i;
				*i=*j;
				*j=swap;
			}
		}
		
	}
	else{
		swap=*i;
		*i=*j;
		*j=swap;
		if(*j < *k){
		}
		else{
			swap=*j;
			*j=*k;
			*k=swap;
			if(*i<*j){
			}
			else{
				swap=*i;
				*i=*j;
				*j=swap;
			}
		}
	}
} 
