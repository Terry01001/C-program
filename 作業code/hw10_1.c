#include<stdio.h>
#include<string.h>

int num[10];

int Bubblesort(int a[]);
int insertionsort(int a[]);
int selectionsort(int a[]);

int main()
{
	int choice;
	while(1){		//�L�a�j�� 
		printf("Please enter ten number:\n");
		int i;
		for(i = 0; i < 10; i++){		//��J�Q�ӼƦr 
			scanf("%d", &num[i]);
		}
		printf("Please select sorting method:\n");
		printf("(1)Bubble Sort (2)Insertion Sort (3)Selection Sort >>");
		scanf("%d", &choice);					//��ܥέ��رƧǪk 
		if(choice == 1){					//�ھڨϥΪ̿�J���I�s�禡 
			Bubblesort(num);
			for(i = 0; i < 10; i++){
				printf("%d ", num[i]);
			}
		}
		else if(choice == 2){
			insertionsort(num);
			for(i = 0; i < 10; i++){
				printf("%d ", num[i]);
			}
		}
		else{
			selectionsort(num);
			for(i = 0; i < 10; i++){
				printf("%d ", num[i]);
			}
		}
		printf("\n\n");
	}
}

int Bubblesort(int a[])	//�w�j�ƧǪk
{
	int i, j;
	for(i = 0; i < 10; i++){
		for(j = 0; j < i; j++){
			if(a[j] > a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	return 0;
}

int insertionsort(int a[])//���J�ƧǪk
{
	int i, j;
	for(i = 1; i < 10; i++){
		for(j = i; j > 0; j--){
			if(a[j] < a[j-1]){
				int temp;
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return 0;
}

int selectionsort(int a[])//��ܱƧǪk
{
	int i, j;
	for(i = 0; i < 9; i++){
		for(j = i; j < 10; j++){
			int min = i;
			if(a[j] < a[min]){
				min = j;
			}
			int temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
	return 0;
}
