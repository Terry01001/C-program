#include<stdio.h>
#include<string.h>


int main(){
	int i;
	printf("Exercise1--------------\n");//Exercise 1
	char str[]="I am Groot";
	printf("%s\n",str);
	for(i=0;i<strlen(str);i++){
		printf("��%d�Ӧr���G%c\n",i,str[i]);
	}
	printf("Exercise2--------------\n");//Exercise 2
	char str2[100];
	printf("�п�J�@�r��G");
	scanf("%s",str2);
	for(i=1;i<=3;i++)
		printf("�Ӧr�ꬰ�G %s\n",str2);
	fflush(stdin);
	char string[100];
	printf("=====================\n�п�J�@�r��:");
	gets(string); 
	for(i=1;i<=3;i++){
		printf("�Ӧr�ꬰ�G\n");
		puts(string);
	}
	printf("Exercise3-----------------\n");//Exercise 3
	char sarr[3][100];
	printf("�п�J�T�r��G\n");
	for(i=0;i<3;i++){
		scanf("%s",sarr[i]);
	}
	printf("�T�r�ꬰ�G");
	for(i=0;i<2;i++)
		printf("%s,",sarr[i]);
	printf("%s",sarr[2]);
	printf("\n�ϧǬ��G");
	for(i=2;i>0;i--)
		printf("%s,",sarr[i]);
	printf("%s",sarr[0]);
	printf("\nExercise4------------------\n");//Exercise 4
	char string1[100],string2[100];
	while(1){
		printf("�п�J�r��]��J0���X�^�G");
		scanf("%s",string1);
		if(string1[0]=='0')
			break;
		for(i=0;i<strlen(string1);i++){
				string2[i]=string1[strlen(string1)-1-i];
		}
		if(strcmp(string1,string2)==0)
			printf("�O�j��\n"); 
		else
			printf("���O�j��\n");
	}

}
 
