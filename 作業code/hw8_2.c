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
			scanf("%s",dna[j]);//��J�Ȧs�J dna �}�C�� 
		for(j=0;j<b;j++){
			max=0;
			for(k=0;k<4;k++)
    			acgt[k]=0;//�Nacgt�}�C���]��0 �A�ΨӦs A�BC�BG�BT �X�{������ 
		
			for(k=0;k<a;k++){
				if(dna[k][j]=='A')
     				acgt[0]++;
    			if(dna[k][j]=='C')
     				acgt[1]++;
    			if(dna[k][j]=='G')
     				acgt[2]++;
    			if(dna[k][j]=='T')
    				acgt[3]++;   //�O��A�BC�BG�BT���O�bj�T�w���ɭԥX�{�X�� 
			}
			for(k=0;k<4;k++){
				if(acgt[k]>max){
    				max=acgt[k];
    				maxindex=k;//�O���X�{�̦h���r�� �ðO�������p�Umaxindex ��K�ڭ̵��U���D��X�ݭn��X���Ӧr�� 
    			}
			}
			if(maxindex==0)    //�P�_�ӿ�X���Ӧr�� 
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
			if(dna[j][k]!=output[k])//�p�⦳�X�Ӧr���P��X���@�� 
     			count++;//�C���@�Ӧr�����۵��h�[ 1 
		}
	}
	printf("%d\n",count);
	FILE *fp=fopen("output.txt","a");//�}���ɮ� �ɮ׼Ҧ������[ 
	fprintf(fp,"%s\n",output);
	fprintf(fp,"%d\n",count);//�N�n��X���ȼg�J�ɮ� 
	fclose(fp);
}
}
