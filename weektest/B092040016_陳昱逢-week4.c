#include<stdio.h>
#include<math.h>
int main(){
	printf("test 1-------------------------\n");//test 1 
	printf("\"寫C語言，像極了愛情\"\n");
	printf("87%%不能再高了\n");
	printf(".\\ _ /.");
	printf("\ntest 2-------------------------\n");//test 2
	float a;
	scanf("%f",&a);
	printf("%10.1f\n",a);
	printf("%010.2f\n",a);
	printf("%+10.4f\n",a);
	printf("%.3f",a);
	float pi = 3.14;
	printf("\ntest 3-------------------------\n");//test 3
	float x;
	scanf("%f",&x);
	printf("x= %f 度時，sin（x）= %f",x,sin(x*pi/180));
	printf("\ntest 4-------------------------\n");//test 4
	char s;
	fflush(stdin);
	scanf("%c",&s);
	printf("你輸入的是 %c ,他的後第三個字元為大寫為 %c",s,s+3);
	 
}
