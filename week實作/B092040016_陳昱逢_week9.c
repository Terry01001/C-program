#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Exercise1---------------\n"); //Exercise 1
	printf("��ܱƧǡ]�j->�p�^�G\n�Ƨǫe�G "); 
	int arr[20],i,j,temp;
	srand(time(NULL));
	for(i=0;i<=19;i++){
		arr[i]=rand()%200 +1;
		printf("%d ",arr[i]);
	}
	printf("\n�Ƨǫ�G ");
	for(i=0;i<=19;i++){ //��ܱƧǪk 
		int max=i;
		for(j=i+1;j<=19;j++){
			if(arr[j]>arr[max])
				max=j; //�O���̤j�� 
		}
		if(max!=i){
			temp=arr[max];
			arr[max]=arr[i];
			arr[i]=temp;
		}
	}
	for(i=0;i<20;i++)
		printf("%d ",arr[i]);
	printf("\nExercise2-----------------\n"); //Exercise 2
	printf("���J�Ƨǡ]�j->�p�^�G\n�Ƨǫe�G "); 
	int b[20],temp2;
	for(i=0;i<20;i++){
		b[i]=rand()%200 +1;
		printf("%d ",b[i]);
	}
	printf("\n�Ƨǫ�G ");
	for(i=1;i<20;i++){
		temp2=b[i];
		for(j=i-1;j>=0;j--){
			if(b[j]<temp2){
				b[j+1]=b[j];
			}
			else
				break;
		}
		b[j+1]=temp2;
	}
	for(i=0;i<20;i++)
		printf("%d ",b[i]);
	printf("\nExercise3------------------\n"); //Exercise 3
	printf("�w�j�Ƨǡ]�j->�p�^�G\n�Ƨǫe�G "); 
	int c[20],temp3;
	for(i=0;i<20;i++){
		c[i]=rand()%200 +1;
		printf("%d ",c[i]);
	}
	printf("\n�Ƨǫ�G ");
	for(i=0;i<20;i++){
		for(j=0;j<19-i;j++)
			if(c[j]<c[j+1]){
				temp3 = c[j];
				c[j]=c[j+1];
				c[j+1]=temp3;
			}
	}
	for(i=0;i<20;i++)
		printf("%d ",c[i]);
	printf("\nExercise4------------------\n");//Exercise 4
	printf("�u�ʷj�M�G\n�ƦC�G    "); 
	int d[20],x;
	srand(time(NULL));
	for(i=0;i<20;i++){
		d[i]=rand()%15+1;
		printf("%d  ",d[i]);
	}
	x=rand()%15+1;
	printf("\n�j�M�Ʀr�G%d\n�j�M�Ʀr�b�� ",x);
	for(i=0;i<20;i++){
		if(d[i]==x)
			printf("%d ",i+1);
	}
	printf("�Ӧ�m\n"); 
	printf("Exercise5-------------------\n");//Exercise 5
	int e[]={2,5,8,12,13,18,21,29,37,49,97},low=0,high=11-1;
	printf("�G���j�M�G\n�ƦC�G    ");
	for(i=0;i<11;i++)
		printf("%d  ",e[i]);
	printf("\n�j�M�Ʀr�G12\n");
	while(low<=high){
		int mid=(low+high)/2;
		printf("�Ѿl��ơG"); 
		for(i=low;i<=high;i++)
			printf("%3d",e[i]);
		printf(" ����ơG%d�B��m�G%d\n",e[mid],mid+1);
		if(e[mid]==12){
			printf("�j�M�Ʀr�b�� %d �Ӧ�m",mid+1);
			break;
		}
		else if(e[mid]>12)
			high=mid-1;
		else if(e[mid]<12)
			low=mid+1;
	}
		
} 
