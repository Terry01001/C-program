#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char c;
	struct node *next;
};
struct node *top = NULL;

void pushc(char k){
	struct node *n;
	n=&k;
	if(top == NULL)//空堆疊
		top=n;
	else{
		n->next=top;
		top=n;
	} 
}
char popc(){
	struct node *temp;
	char k;
	k=temp->c;
	temp = top;
	top=top->next;
	free(temp);
	return k;
}

int main(){
	int i;
	char s[30],x;
	while(1){
		printf("s = ");
		scanf("%s",s);
		for(i=0;i<strlen(s);i++){
			if((s[i]=='(')||(s[i]=='[')||(s[i]=='{')){
				pushc(s[i]);
			}
			else{//遇到右邊系列的刮號 
				x=popc();
				switch(x){
					case '(':	if(s[i]!=')'){printf("false");}return 0;
					case '[':	if(s[i]!=']'){printf("false");}return 0;
					case '{':	if(s[i]!='}'){printf("false");}return 0;
				}
			}
		}
		printf("true");
	}
	
	
} 
