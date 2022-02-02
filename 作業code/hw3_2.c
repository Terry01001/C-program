#include<stdio.h>

int main(){
	int num,i,k,a=0; //宣告變數  其中 a 用途為判斷是否為質數 
	printf("input the number:");
	scanf("%d",&num);  //輸入一個數字存入num 
	for(i=2;i<= num/2 ;i++){            //寫成 num = i + t 的形式 避免重複的組合 迴圈跑 i 至 num/2 即可 
		int t = num-i;
		
		if(i==2){//處理 i=2 的情況 
			for(k=2; k<t ;k++){        //判斷 t = num-i 是否為質數 
				if(t % k == 0)//被除了1及自己其他數字 整除 就不是質數 
					a++;
			}
		if(a==0)//若 a=0 則 t 是質數 
			printf("%d can be written as %d + %d\n",num,i,t);
		a=0;//重設 a 的值 
		}
		
		else if(i==3){//處理 i=3 的情況 
			for(k=2;k < t;k++){        //判斷 t = num-i 是否為質數 
				if(t % k==0)//被除了1及自己其他數字 整除 就不是質數 
					a++;
			}
		if(a==0)//若 a=0 則 t 是質數
			printf("%d can be written as %d + %d\n",num,i,t);
		}
		
		else{//處理 i >= 4 的情況
			int b=0; //b 用途為判斷是否為質數
			
			for(k=2;k< i;k++){  //先判斷i是不是質數 
				if(i%k == 0)  //i可以被除了1及本身 其他數字 整除 就不是質數 
					b++;
			} 
			if (b==0){ //如果 b=0 則 i 是質數，此時再去看 t=num-i 是不是質數
				int c,d=0;
				
				for(c=2;c < t;c++){
					if(t%c==0) //可以被除了1及本身 其他數字 整除 就不是質數
						d++;
				} 
				
				if(d==0)//如果 d 為 0 ，則 t 是質數 
					printf("%d can be written as %d + %d\n",num,i,t);
			}
		} 
	}
}
	



