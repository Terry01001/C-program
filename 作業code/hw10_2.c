#include<stdio.h>


int main()
{
	int k;
	while(1){				//�L�a�j�� 
		scanf("%d", &k);	//��J�H��	
		if(k == 0)			//�Y��J0�A���X�j�� 
			break;
		float sum = 0, array[1001];
		int i;
		for(i = 0; i < k; i++){		//��J��� 
			scanf("%f", &array[i]);
			sum += array[i];		//�[�` 
		}
		float eq = sum/k;		//�p�⥭�� 
		eq = (int)(100 * eq + 0.5);		//�|�ˤ��J 
		eq = eq / 100.0;
		float s1 = 0, s2 = 0;
		for(i = 0; i < k; i++){
			if(array[i] < eq)		//�[�`�Ҧ���O�p�󥭧����H�P�������t�� 
				s1 += (eq - array[i]);
			else if(array[i] > eq)	//�[�`�Ҧ���O�j�󥭧����H�P�������t��(������� 
				s2 += (array[i] - eq);
		}
		if(s1 > s2)
			printf("$%.2f\n", s2);	
		else
			printf("$%.2f\n", s1);
	}
}
