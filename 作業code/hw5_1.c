#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char str[1000001];
	int i,j,op=0;
	while(scanf("%s",str) && str[0]!='.'){ //��J . �N���X�j��
		for (i=1;i<=strlen(str);i++){ //�i�� i ���l�r�ꪺ���� 
			if(strlen(str)% i ==0){  //�P�_�l�r����ױƦC�X���O�_����r�ꪺ���� 
				for(j=0;j<strlen(str);j++){
					if(str[j]==str[j%i]){  //���ײŦX�h�ݤ��e���O�_�۵� 
						op=strlen(str)/i;
					}
					else{
						op=0;
						break; //�Y���@���e�����۵��h���X�j��A���]op�� 
					}
				}
			}
			if(op!=0)//�ѩ���槹op���w�j��1�A�]�����X�j��L�Xop�� 
				break;
		}
		printf("%d\n",op);
	}

} 
