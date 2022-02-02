#include<stdio.h>
#include<time.h> 

int main(){
	int arr[6],i,j,temp,temp2;
	srand(time(NULL));  //避免抽到同樣的數字 
	for(i=0;i<6;i++)
		arr[i]=rand()% 9 +1;  //隨機產生一陣列
	
	printf("The array given is:\n");
	for(i=0;i<6;i++)
		printf("%d  ",arr[i]);  //印出隨機產生的陣列
		
		//插入排序法 Insertion sort
	for(i=1;i<6;i++){
		temp=arr[i];  //將要插入的數字存入temp 
		for(j=i-1;j>=0;j--){
			if(arr[j]>temp)
				arr[j+1]=arr[j]; //右移 
			else
				break;
		}
		arr[j+1]=temp;
	} 
	
	for(i=1;i<5;i+=2){
		temp2=arr[i];  //將排完順序後 陣列中的第二三個元素交換 以及 將第四五個元素交換 就完成題目的要求 
		arr[i]=arr[i+1];
		arr[i+1]=temp2;
	}
	printf("\nThe new array after rearranging:\n");
	for(i=0;i<6;i++)
		printf("%d  ",arr[i]);  //印出排序後的陣列 
	printf("\n");
} 
