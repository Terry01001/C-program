#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Exercise 1------------------\n");//Exercise 1
	int arr[5]={1,14,5,9,10},i;
	for(i=0;i<5;i++){
		printf("�}�C��%d�Ӧ�m��%d\n",i+1,arr[i]);
	}
	printf("Exercise 2---------------------\n");//Exercise 2
	int arr2[]={74,48,30,17,62};
	printf("�}�C���e�G\n");
	int max=arr2[0];
	for(i=0;i<5;i++){
		if(arr2[i]>max){
			max=arr2[i+1];
		}
		printf("%d : %d\n",i,arr2[i]);
	} 
	printf("�̤j�ȡG%d",max);
	printf("\nExercise 3-----------------\n");//Exercise 3
	int b[5];
	float sum;
	printf("���׬� 5 ���H���}�C�G\n");
	srand(time(NULL));
	for(i=0;i<5;i++){
		b[i]=rand() % 100+1;
		printf("%d : %d\n",i,b[i]);
		sum+=b[i];
	}	
	printf("�����ȡG%f",sum/5);
	printf("\n============================\n�~���@�|�H");//Exercise 4
	printf("\n============================\n");
	int min=b[0],maximum=b[0],s1=0,s2=0;
	for (i=0;i<5;i++){
		if(b[i]<min){ 
			min=b[i];
			s1=i;
		} 
		if(b[i]>maximum){ 
			maximum=b[i];
			s2=i;
	}	} 
	printf("�Ӱ}�C���̤p�ȡG%d  ��%d��\n",min,s1);
	printf("�Ӱ}�C���̤j�ȡG%d  ��%d��\n",maximum,s2); 
	printf("Exercise 5--------------------\n");//Exercise 5
	int c[10],d[10];
	srand(time(NULL));
	for(i=0;i<10;i++)
		c[i]=rand() % 10 ; 
	printf("�h���� A�G");
	for(i=9;i>=1;i--){
		printf("%d*x^%d + ",c[9-i],i);
	} 
	printf("%d\n",c[9]); 
	
	for(i=0;i<10;i++)
		d[i]=rand() % 10 ; 
	printf("�h���� B�G");
	for(i=9;i>=1;i--){
		printf("%d*x^%d + ",d[9-i],i);
	} 
	printf("%d",d[9]);
	printf("\n�ۥ[���G  ");
	for(i=9;i>=1;i--){
		printf("%d*x^%d + ",c[9-i]+d[9-i],i);
	} 
	printf("%d",c[9]+d[9]); 
	printf("\nExercise 6-------------------\n");//Exercise 6
	int array[2][3] ={{1,2,3},{4,5,6}},j,temp1,temp2;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
			printf("�}�C��m[%d][%d]:%d\n",i,j,array[i][j]);
	}
	printf("2���}�C�G\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%3d",array[i][j]);
		}
		printf("\n");
	} 
	temp1=array[0][0]; // �洫�Ĥ@��P�ĤT�� 
	temp2=array[1][0];
	array[0][0]=array[0][2];
	array[1][0]=array[1][2];
	array[0][2]=temp1;
	array[1][2]=temp2;
	
	printf("�Ĥ@��M�ĤT��洫��G\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%3d",array[i][j]);
		}
		printf("\n");
	} 
	
	
	
	
} 
