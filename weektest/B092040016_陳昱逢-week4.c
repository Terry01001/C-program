#include<stdio.h>
#include<math.h>
int main(){
	printf("test 1-------------------------\n");//test 1 
	printf("\"�gC�y���A�����F�R��\"\n");
	printf("87%%����A���F\n");
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
	printf("x= %f �׮ɡAsin�]x�^= %f",x,sin(x*pi/180));
	printf("\ntest 4-------------------------\n");//test 4
	char s;
	fflush(stdin);
	scanf("%c",&s);
	printf("�A��J���O %c ,�L����ĤT�Ӧr�����j�g�� %c",s,s+3);
	 
}
