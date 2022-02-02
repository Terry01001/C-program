#include<stdio.h>
#include<stdlib.h>
void move(int n,char c,char k){
	printf("Move ring %d from %c to %c\n",n,c,k);
}
void hanoi(int n,char A,char B,char C){
	if(n==3){
		move(1,A,C);
		move(2,A,B);
		move(1,C,B);
		move(3,A,C);
		move(1,B,A);
		move(2,B,C);
		move(1,A,C);
		return;
	}
	hanoi(n-1,A,B,C);
}

int main(){
	char A='A',B='B',C='C';
	int n;
	scanf("%d",&n);
	hanoi(n,A,B,C);
	return 0;
} 
