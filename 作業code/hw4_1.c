#include<stdio.h>
#include<time.h> 

int main(){
	int arr[6],i,j,temp,temp2;
	srand(time(NULL));  //�קK���P�˪��Ʀr 
	for(i=0;i<6;i++)
		arr[i]=rand()% 9 +1;  //�H�����ͤ@�}�C
	
	printf("The array given is:\n");
	for(i=0;i<6;i++)
		printf("%d  ",arr[i]);  //�L�X�H�����ͪ��}�C
		
		//���J�ƧǪk Insertion sort
	for(i=1;i<6;i++){
		temp=arr[i];  //�N�n���J���Ʀr�s�Jtemp 
		for(j=i-1;j>=0;j--){
			if(arr[j]>temp)
				arr[j+1]=arr[j]; //�k�� 
			else
				break;
		}
		arr[j+1]=temp;
	} 
	
	for(i=1;i<5;i+=2){
		temp2=arr[i];  //�N�Ƨ����ǫ� �}�C�����ĤG�T�Ӥ����洫 �H�� �N�ĥ|���Ӥ����洫 �N�����D�ت��n�D 
		arr[i]=arr[i+1];
		arr[i+1]=temp2;
	}
	printf("\nThe new array after rearranging:\n");
	for(i=0;i<6;i++)
		printf("%d  ",arr[i]);  //�L�X�Ƨǫ᪺�}�C 
	printf("\n");
} 
