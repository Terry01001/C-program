#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j;
	printf("test1------------\n");//test 1
	srand(time(NULL));
	printf("�����������X�G\n");
	int price1[8],price2[8],price3[8];
	for(i=0;i<8;i++)
		price1[i]=rand()%10;
	for(i=0;i<8;i++)
		price2[i]=rand()%10;
	for(i=0;i<8;i++)
		price3[i]=rand()%10;
	printf("�Y�����X�G");
	for(i=0;i<8;i++)
		printf("%d",price1[i]);
	printf("\n�G�����X�G");
	for(i=0;i<8;i++)
		printf("%d",price2[i]);
	printf("\n�T�����X�G");
	for(i=0;i<8;i++)
		printf("%d",price3[i]);
	printf("\n�п�J���鸹�X�G");
	int number[8];
	for(i=0;i<8;i++)
		scanf("%d",&number[i]);
	int a=0,b=0,c=0; 
	for(i=0;i<8;i++){
		if(number[i]==price1[i])
			a++;
		if(number[i]==price2[i])
			b++;
		if(number[i]==price3[i])
			c++;
	}
	if(a==8)
		printf("���ߧA���Y��");
	else if(b==8)
		printf("���ߧA���G��");
	else if(c==8)
		printf("���ߧA���T��");
	else
		printf("�z�S����");
	
	
	printf("\ntest2------------\n");//test 2
	int stu_height[6],temp2;
	printf("�п�J�ǥͨ����G");
	for(i=0;i<6;i++)
		scanf("%d",&stu_height[i]);
	for(i=1;i<6;i++){
		temp2=stu_height[i];
		for(j=i-1;j>=0;j--){
			if(stu_height[j]>temp2){
				stu_height[j+1]=stu_height[j];
			}
			else
				break;
		}
		stu_height[j+1]=temp2;
	}
	for(i=1;i<=6;i++){
		printf("�y��s��%d:\t�Ǹ�%d ����%d\n",i,i,stu_height[i-1]);
	}
	printf("test3------------\n");//test 3
	fflush(stdin);
	char string1[20];
	char string2[]="";
	gets(string1);
	if(strncmp(string1,"insert left",11) ==0)
		printf("word:%c",string1[12]);
	
	
	
	
	printf("\ntest4------------\n");//test 4
	char arr[6];
	printf("�п�J�y�СG");
	scanf("%s",arr);
	printf("����Ψ����Ь�(%d,%d)(%d,%d)(%d,%d)(%d,%d)",arr[1]-2,arr[3]-2,arr[1]-2,arr[3]+2,arr[1]+2,arr[3]+2,arr[1]+2,arr[3]-2) ;
}
