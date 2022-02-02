#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("test 1-------------------\n");//test 1
	int rnum, i ,j,k;
	srand(time(NULL));
	rnum = rand() % 10 + 1;
	printf("產生數字為：%d\n",rnum);
	for(i=1;i<=rnum;i++){
		for(j=rnum-i;j>0;j--){
			printf(" ");
			
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	printf("test 2---------------------\n");//test 2
	int n;
	printf("Time (minutes):");
	scanf("%d",&n);
	if (n<=0)
		printf("Error!");
	else if (n<=70)
		printf("The parking fee is 100 dollar(s).");
	else if(n<=130)
		printf("The parking fee is 170 dollar(s).");
	else if(n<=190)
		printf("The parking fee is 220 dollar(s).");
	else {
		printf("The parking fee is %d dollar(s).",240+20*((n-190)/60));
	}
	printf("test 3------------------------\n");//test 3
	int a,b,c;
	printf("請輸入三個整數：");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a+b)>c && (a+c)>b && (b+c)>a){
		int maxium=c, a1, k1=b, k2=c;
		if(b>maxium){
			maxium=b;
			k1=a;k2=c;
		}
		if(c>maxium){
			maxium=c;
			k1=a;k2=b;
		}
		if((k1*k1+k2*k2)<(maxium*maxium))
			printf("鈍角三角形\n");
		else if ((k1*k1+k2*k2)==(maxium*maxium))
			printf("直角三角形\n");
		else if((k1*k1+k2*k2)>(maxium*maxium))
			printf("銳角三角形\n");
	}
		
	}
	else
	
//	printf("test 4---------------------\n");//test 4
//	int year,month,date;
//	scanf("%d %d %d",&year,&month,&date);
//	if(year%4==0){
//		if(year%100==0){
//			 printf("It\'s common year");
//			 switch(month){
//		case 1:
//			printf("It\'s the %dth day in %d",date,year);
//			break;
//		case 2:
//			printf("It\'s the %dth day in %d",31+date,year);
//			break;
//		case 3:
//			printf("It\'s the %dth day in %d",59+date,year);
//			break;
//		case 4: 
//			printf("It\'s the %dth day in %d",90+date,year);
//			break;
//		case 5:
//			printf("It\'s the %dth day in %d",120+date,year);
//			break;
//		case 6:
//			printf("It\'s the %dth day in %d",151+date,year);
//			break;
//		case 7:
//			printf("It\'s the %dth day in %d",181+date,year);
//			break;
//		case 8:
//			printf("It\'s the %dth day in %d",212+date,year);
//			break;
//		case 9:
//			printf("It\'s the %dth day in %d",243+date,year);
//			break;
//		case 10:
//			printf("It\'s the %dth day in %d",273+date,year);
//			break;
//		case 11:
//			printf("It\'s the %dth day in %d",304+date,year);
//			break;
//		case 12:
//			printf("It\'s the %dth day in %d",334+date,year);
//			break;
//	}
//		}
//		else{
//			printf("It\'s leap year");
//			switch(month){
//		case 1:
//			printf("It\'s the %dth day in %d",date,year);
//			break;
//		case 2:
//			printf("It\'s the %dth day in %d",31+date,year);
//			break;
//		case 3:
//			printf("It\'s the %dth day in %d",60+date,year);
//			break;
//		case 4: 
//			printf("It\'s the %dth day in %d",91+date,year);
//			break;
//		case 5:
//			printf("It\'s the %dth day in %d",121+date,year);
//			break;
//		case 6:
//			printf("It\'s the %dth day in %d",152+date,year);
//			break;
//		case 7:
//			printf("It\'s the %dth day in %d",182+date,year);
//			break;
//		case 8:
//			printf("It\'s the %dth day in %d",213+date,year);
//			break;
//		case 9:
//			printf("It\'s the %dth day in %d",244+date,year);
//			break;
//		case 10:
//			printf("It\'s the %dth day in %d",274+date,year);
//			break;
//		case 11:
//			printf("It\'s the %dth day in %d",305+date,year);
//			break;
//		case 12:
//			printf("It\'s the %dth day in %d",335+date,year);
//			break;
//	}
//		}
//	}
//	if(year%400==0){
//		if(year%3200!=0){
//			printf("It\'s common year");
//			switch(month){
//		case 1:
//			printf("It\'s the %dth day in %d",date,year);
//			break;
//		case 2:
//			printf("It\'s the %dth day in %d",31+date,year);
//			break;
//		case 3:
//			printf("It\'s the %dth day in %d",59+date,year);
//			break;
//		case 4: 
//			printf("It\'s the %dth day in %d",90+date,year);
//			break;
//		case 5:
//			printf("It\'s the %dth day in %d",120+date,year);
//			break;
//		case 6:
//			printf("It\'s the %dth day in %d",151+date,year);
//			break;
//		case 7:
//			printf("It\'s the %dth day in %d",181+date,year);
//			break;
//		case 8:
//			printf("It\'s the %dth day in %d",212+date,year);
//			break;
//		case 9:
//			printf("It\'s the %dth day in %d",243+date,year);
//			break;
//		case 10:
//			printf("It\'s the %dth day in %d",273+date,year);
//			break;
//		case 11:
//			printf("It\'s the %dth day in %d",304+date,year);
//			break;
//		case 12:
//			printf("It\'s the %dth day in %d",334+date,year);
//			break;
//	}
//		}
//		else{
//			printf("It\'s leap year");
//			switch(month){
//		case 1:
//			printf("It\'s the %dth day in %d",date,year);
//			break;
//		case 2:
//			printf("It\'s the %dth day in %d",31+date,year);
//			break;
//		case 3:
//			printf("It\'s the %dth day in %d",60+date,year);
//			break;
//		case 4: 
//			printf("It\'s the %dth day in %d",91+date,year);
//			break;
//		case 5:
//			printf("It\'s the %dth day in %d",121+date,year);
//			break;
//		case 6:
//			printf("It\'s the %dth day in %d",152+date,year);
//			break;
//		case 7:
//			printf("It\'s the %dth day in %d",182+date,year);
//			break;
//		case 8:
//			printf("It\'s the %dth day in %d",213+date,year);
//			break;
//		case 9:
//			printf("It\'s the %dth day in %d",244+date,year);
//			break;
//		case 10:
//			printf("It\'s the %dth day in %d",274+date,year);
//			break;
//		case 11:
//			printf("It\'s the %dth day in %d",305+date,year);
//			break;
//		case 12:
//			printf("It\'s the %dth day in %d",335+date,year);
//			break;
//	}
//		}
//	}

	
}
