#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct PersonalInfo{
	int ID;
	char* name;
	int age;
	int gender;
	int birthday[3];
};

void add(){
	FILE *fp = fopen("data.txt","a+");
	struct PersonalInfo *p1;
	printf("Please input new data\nID:");
	fflush(stdin);
	scanf("%d",p1->ID);
	fprintf(fp,"%d",p1->ID);
	printf("Name:");
	fflush(stdin);
	scanf("%s",p1->name);
	fputs(p1->name,fp);
	printf("Age:");
	scanf("%d",p1->age);
	fprintf(fp,"%d",p1->age);
	printf("Gender:");
	scanf("%d",p1->gender);
	fprintf(fp,"%d",p1->gender);
	printf("Birthday:");
	scanf("%d %d %d",p1->birthday[0],p1->birthday[1],p1->birthday[2]);
	fprintf(fp,"%d",p1->birthday[0]);
	fputs("/",fp);
	fprintf(fp,"%d",p1->birthday[1]);
	fputs("/",fp);
	fprintf(fp,"%d",p1->birthday[2]);
	fclose(fp);
}
void del(){
	struct PersonalInfo *p1;
	printf("Please input ID:\nID:");
	scanf("%d",p1->ID);
}
void search(){
	
}
void modify(){
	
}

int main(){
	while(1){
		int choice;
		printf("1.Add\n2.Delete\n3.Search\n4.Modify\n5.Exit\n?");
		scanf("%d",&choice);
		switch(choice){
			case 1: add();break;
			case 2: del();break;
			case 3:
			case 4:
			case 5: return;
		}
	}
}
