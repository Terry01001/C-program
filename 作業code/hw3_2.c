#include<stdio.h>

int main(){
	int num,i,k,a=0; //�ŧi�ܼ�  �䤤 a �γ~���P�_�O�_����� 
	printf("input the number:");
	scanf("%d",&num);  //��J�@�ӼƦr�s�Jnum 
	for(i=2;i<= num/2 ;i++){            //�g�� num = i + t ���Φ� �קK���ƪ��զX �j��] i �� num/2 �Y�i 
		int t = num-i;
		
		if(i==2){//�B�z i=2 �����p 
			for(k=2; k<t ;k++){        //�P�_ t = num-i �O�_����� 
				if(t % k == 0)//�Q���F1�Φۤv��L�Ʀr �㰣 �N���O��� 
					a++;
			}
		if(a==0)//�Y a=0 �h t �O��� 
			printf("%d can be written as %d + %d\n",num,i,t);
		a=0;//���] a ���� 
		}
		
		else if(i==3){//�B�z i=3 �����p 
			for(k=2;k < t;k++){        //�P�_ t = num-i �O�_����� 
				if(t % k==0)//�Q���F1�Φۤv��L�Ʀr �㰣 �N���O��� 
					a++;
			}
		if(a==0)//�Y a=0 �h t �O���
			printf("%d can be written as %d + %d\n",num,i,t);
		}
		
		else{//�B�z i >= 4 �����p
			int b=0; //b �γ~���P�_�O�_�����
			
			for(k=2;k< i;k++){  //���P�_i�O���O��� 
				if(i%k == 0)  //i�i�H�Q���F1�Υ��� ��L�Ʀr �㰣 �N���O��� 
					b++;
			} 
			if (b==0){ //�p�G b=0 �h i �O��ơA���ɦA�h�� t=num-i �O���O���
				int c,d=0;
				
				for(c=2;c < t;c++){
					if(t%c==0) //�i�H�Q���F1�Υ��� ��L�Ʀr �㰣 �N���O���
						d++;
				} 
				
				if(d==0)//�p�G d �� 0 �A�h t �O��� 
					printf("%d can be written as %d + %d\n",num,i,t);
			}
		} 
	}
}
	



