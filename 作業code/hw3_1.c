#include<stdio.h>

int main(){
	int n;
	printf("Input the number of terms :");
	scanf("%d",&n);  //�N�Q�n��X���Ʀr�ƥئs�J n 
	printf("\nThe square natural up to %d terms are :",n);
	int i , sum=0; //�ŧi�@�Ӷ]�j�骺�ܼ� �� ��J�`�M���ܼƨñN��l�ȳ]�� 0 
	for(i=1;i<=n;i++){
		printf("%d ",i*i);  //�]�j���`�@�ݭn�] n �]�ϥΪ̿�J�^���A�æL�X�q 1 �}�l����������� 
		sum+=i*i;  //�N�C��������Ʋ֥[ 
	}
	printf("\nThe sum of Square Natural Number upto %d terms = %d",n,sum); //�L�X�`�M 
	
}
