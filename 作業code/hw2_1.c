#include<stdio.h>

int main(){
	int a,b,c;   //�ŧi�T�Ӿ���ܼ�a,b,c 
	printf("���H�N��J�T���P��� a b c:\n");
	printf("a �� ");
	scanf("%d",&a);
	printf("b �� ");
	scanf("%d",&b);                 //���O�N��L��J���Ȧs�J�ܼ� a,b,c 
	printf("c �� ");                //�Ĥ@�ӿ�J�Ȧs�Ja, �ĤG�ӿ�J�Ȧs�Jb, �ĤT�ӿ�J�Ȧs�Jc 
	scanf("%d",&c);
	
	//���P�_ a,b ���j�p���Y �`�@���� a>b, a<b ,a=b �T�ر��p
	if(a > b){       //�Ĥ@�ӱ��p a>b 
		if(a > c){                      //�b a>b ���p�U�Aa �S�j�� c 
			printf("a is the largest");
		}
		else if(a < c){                 //�ba>b ���p�U�Aa �p�� c
			printf("c is the largest");
		}
		else                            //�ba>b ���p�U�Aa ���� c 
			printf("a , c is the largest");
	}
	else if(a < b){  //�ĤG�ӱ��p a<b 
		if(b > c){                     //�b a<b ���p�U�Ab �S�j�� c
			printf("b is the largest");
		}
		else if(b < c){                //�b a<b ���p�U�Ab �p�� c
			printf("c is the largest");
		}
		else                           //�b a<b ���p�U�Ab ���� c
			printf("b , c is the largest");
	}
	else{            //�ĤT�ӱ��p a=b 
		if(a > c){                     //�b a=b ���p�U�Aa �j�� c 
			printf("a , b is the largest");
		}
		else if(a < c){                //�b a=b ���p�U�Aa �p�� c
			printf("c is the largest");
		}
		else                           //�b a=b ���p�U�Aa ���� c
			printf("a,b,c is the largest");
	}
	
} 
