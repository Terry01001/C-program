#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int LV,Exp,HP,Money;
FILE *fp;

void Show_Move(void);
void Show_state(void);
void Save_Game(void); 
int Countinue_Game(int Option_Switch);

int  main(){
	char name[50];
	int choice;
	printf("Welcome to Monster and Man!!!\n");
	printf("1.New Game\n2.Countinue\n3.Exit\nSelect:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Please input player game:\n");
			scanf("%s",name);
			printf("Welcome to game world \"%s\".",name);
			printf("\nSystem: Game saved.\n");
			fp = fopen("Adventurer_Data.txt","w");//²£¥ÍÀÉ®× 
			fputs("Player Name:",fp);
			fputs(name,fp);
			fputs("\nPlayer LV:1\nPlayer EXP:0\nPlayer HP:100\nPlayer Money:0",fp);
			fclose(fp);
			break;
		case 2:
			Countinue_Game(1);
			break;
		case 3:
			return 0;
	}
	
	
	
}



int Countinue_Game(int Option_Switch){
	char Char_In_File;
	int choice2;
	printf("Welcome back player, here is your state:\n");
	fp =fopen("Adventurer_Data.txt","r");
	do{
		Char_In_File = getc(fp);
		printf("%c",Char_In_File);
	}while(Char_In_File != EOF);
	fclose(fp);

	printf("\nIt's your turn:\n1.Move\n2.Show state\n3.Save Game\n4.Back to tile\nSelect:");
	scanf("%d",&choice2);
	return choice2;
}
void Show_state(){
	
}
void Save_Game(){
	
}
void Show_Move(){
	
}
