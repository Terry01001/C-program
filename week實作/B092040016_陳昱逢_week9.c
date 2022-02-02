#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Exercise1---------------\n"); //Exercise 1
	printf("選擇排序（大->小）：\n排序前： "); 
	int arr[20],i,j,temp;
	srand(time(NULL));
	for(i=0;i<=19;i++){
		arr[i]=rand()%200 +1;
		printf("%d ",arr[i]);
	}
	printf("\n排序後： ");
	for(i=0;i<=19;i++){ //選擇排序法 
		int max=i;
		for(j=i+1;j<=19;j++){
			if(arr[j]>arr[max])
				max=j; //記錄最大值 
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
	printf("插入排序（大->小）：\n排序前： "); 
	int b[20],temp2;
	for(i=0;i<20;i++){
		b[i]=rand()%200 +1;
		printf("%d ",b[i]);
	}
	printf("\n排序後： ");
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
	printf("泡沫排序（大->小）：\n排序前： "); 
	int c[20],temp3;
	for(i=0;i<20;i++){
		c[i]=rand()%200 +1;
		printf("%d ",c[i]);
	}
	printf("\n排序後： ");
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
	printf("線性搜尋：\n數列：    "); 
	int d[20],x;
	srand(time(NULL));
	for(i=0;i<20;i++){
		d[i]=rand()%15+1;
		printf("%d  ",d[i]);
	}
	x=rand()%15+1;
	printf("\n搜尋數字：%d\n搜尋數字在第 ",x);
	for(i=0;i<20;i++){
		if(d[i]==x)
			printf("%d ",i+1);
	}
	printf("個位置\n"); 
	printf("Exercise5-------------------\n");//Exercise 5
	int e[]={2,5,8,12,13,18,21,29,37,49,97},low=0,high=11-1;
	printf("二元搜尋：\n數列：    ");
	for(i=0;i<11;i++)
		printf("%d  ",e[i]);
	printf("\n搜尋數字：12\n");
	while(low<=high){
		int mid=(low+high)/2;
		printf("剩餘資料："); 
		for(i=low;i<=high;i++)
			printf("%3d",e[i]);
		printf(" 中位數：%d、位置：%d\n",e[mid],mid+1);
		if(e[mid]==12){
			printf("搜尋數字在第 %d 個位置",mid+1);
			break;
		}
		else if(e[mid]>12)
			high=mid-1;
		else if(e[mid]<12)
			low=mid+1;
	}
		
} 
