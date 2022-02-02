#include<stdio.h>


int main()
{
	int k;
	while(1){				//無窮迴圈 
		scanf("%d", &k);	//輸入人數	
		if(k == 0)			//若輸入0，跳出迴圈 
			break;
		float sum = 0, array[1001];
		int i;
		for(i = 0; i < k; i++){		//輸入資料 
			scanf("%f", &array[i]);
			sum += array[i];		//加總 
		}
		float eq = sum/k;		//計算平均 
		eq = (int)(100 * eq + 0.5);		//四捨五入 
		eq = eq / 100.0;
		float s1 = 0, s2 = 0;
		for(i = 0; i < k; i++){
			if(array[i] < eq)		//加總所有花費小於平均的人與平均的差值 
				s1 += (eq - array[i]);
			else if(array[i] > eq)	//加總所有花費大於平均的人與平均的差值(取絕對值 
				s2 += (array[i] - eq);
		}
		if(s1 > s2)
			printf("$%.2f\n", s2);	
		else
			printf("$%.2f\n", s1);
	}
}
