#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,count=0;
	char c,a;
	FILE *fp=fopen("random.txt","w");//���}�ɮ� �Ҧ����g�J 
	srand(time(NULL));
	for(i=1 ; i<=1000 ; i++){//�Q�� ASCII �ȨӪ�ܤj�g�H�Τp�g���^��r�� 
		c=rand() % 58 + 65;//�H�����ͤ@��Ƥ��� 65~122 ���� 
    	while(c >= 91 && c <= 96){//�p�G���ͪ��Ʀr������b 91~96 �����h�A���s���ͤ@���A���줣�b�o�Ӱ϶��̭�����A�]��91~96��ASCII�Ȥ��N��j�p�g���^��r�� 
   		c=rand() % 58 +65;
  		}
  		fprintf(fp,"%c",c);//�H�r�����Φ��g�J�ɮ� 
 	}
 	fclose(fp);//�����ɮ� 
 	while(1){
  		FILE *fp1=fopen("random.txt","r");//���}�ɮ� �Ҧ���Ū�� 
  		printf("�п�J�n�M�䪺�r���G");
  		scanf("%c",&a);
  		fflush(stdin);
  	if(a=='*'){//��J * �h���� 
   		printf("�����M��\n"); 
   		break;
	}
  	else if((a>=65&&a<=90)||(a>=97&&a<=122)){ 
  		while ((c=getc(fp1)) != EOF) {//��C�Ӧr���i��Ū����� 
   			c=getc(fp1);
   			if(c==a)//�p�G�P�ҭn�D���r���۵��A�h�p�ƥ[ 1 
    			count++;
  		}
  		printf("�r��\'%c\'�@�@���G%d\n",a,count);
  		count=0;//���] count 
  		fclose(fp1);//�����ɮ�
  	}
  	else
  		printf("��J���~�A�A�դ@���C\n"); 
 	}
}
