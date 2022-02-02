#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main(void){
	int t,a,b;
	scanf("%d",&t);
	int i,j,k,l;
	for(i=0;i<t;i++){
		int max=0,maxindex=0,count=0;
		scanf("%d%d",&a,&b);
		char dna[a][b];
		char output[b];
		int acgt[4];
		for(j=0;j<4;j++)
			acgt[j]=0;

		for(j=0;j<a;j++)
			scanf("%s",dna[j]);//輸入值存入 dna 陣列中 
		for(j=0;j<b;j++){
			max=0;
			for(k=0;k<4;k++)
    			acgt[k]=0;//將acgt陣列全設為0 ，用來存 A、C、G、T 出現的次數 
		
			for(k=0;k<a;k++){
				if(dna[k][j]=='A')
     				acgt[0]++;
    			if(dna[k][j]=='C')
     				acgt[1]++;
    			if(dna[k][j]=='G')
     				acgt[2]++;
    			if(dna[k][j]=='T')
    				acgt[3]++;   //記錄A、C、G、T分別在j固定的時候出現幾次 
			}
			for(k=0;k<4;k++){
				if(acgt[k]>max){
    				max=acgt[k];
    				maxindex=k;//記錄出現最多的字母 並記錄此情況下maxindex 方便我們等下知道輸出需要輸出哪個字母 
    			}
			}
			if(maxindex==0)    //判斷該輸出哪個字母 
				output[j]='A';
			if(maxindex==1)
				output[j]='C';
			if(maxindex==2)
    			output[j]='G';
			if(maxindex==3)
    			output[j]='T';
	}
	output[b]='\0';
	printf("%s\n",output);
  
	for(j=0;j<a;j++){
		for(k=0;k<b;k++){
			if(dna[j][k]!=output[k])//計算有幾個字元與輸出不一樣 
     			count++;//每當有一個字元不相等則加 1 
		}
	}
	printf("%d\n",count);
	FILE *fp=fopen("output.txt","a");//開啟檔案 檔案模式為附加 
	fprintf(fp,"%s\n",output);
	fprintf(fp,"%d\n",count);//將要輸出的值寫入檔案 
	fclose(fp);
}
}
