#include<stdio.h>

int main(){
	int n,i,j;
	while(1){
		scanf("%d",&n);
		if(n>0 && n<=9)  //�Y��J���Ӧ�ƪ�����X 
			printf("%d\n",n);
		else if(n>9){  //��J�Ƭ����Ƥ@�W������ 
			int a;
			a = n%10;  
			int sum = a;  //���N�Ӧ�Ʃ�J sum �̭� 
			for(i=1;i<10;i++){
				n/=10;  //�j��}�l���� n=n/10 
				if(n==0)  //�Y���� n �� 0 �h���X�j�� 
					break;
				else{  //�Y���� n ���� 0 �h�[�Jsum�� 
					sum+=n%10;
				}
			}
			while(1){ 
				if(sum<=9) //�Y�[�`�᪺ sum ���� ���ƥH�W   �]�]�����ɪ� sum �̤j�Ȭ� 90�^ 
					break;
				int temp1 = sum%10;  //�N�Ӧ�ƤΤQ��Ƥ��O�s�J temp1,temp2 
				int temp2 = sum/10;
				sum = temp1+temp2;  //�Nsum��s�A���s�ˬd 
			}
			printf("%d\n",sum);
		}
		else //�Y��J���Ƥp�󵥩� 0 �h���X�j�� 
			break;
	}
} 
