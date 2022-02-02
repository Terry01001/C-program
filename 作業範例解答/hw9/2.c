#include "stdio.h"
#include "string.h"

int main(void){
    int k;
    char str1[1001],str2[1001],ans[1001];
    while(gets(str1)){
        gets(str2);
        k=0;
        for(int i = 0;i<strlen(str1);i++){
            for(int j = 0;j<strlen(str2);j++){
                if(str1[i] == str2[j]){
                    ans[k++] = str1[i];
                    str1[i] = '!';
                    str2[j] = '@'; 
                }
            }
        }
        ans[k] = '\0';
        for(int i = 0;i<strlen(ans);i++){
            for(int j = 0;j<strlen(ans)-i -1;j++){
                if(ans[j]>ans[j+1]){
                    char temp = ans[j];
                    ans[j] = ans[j+1];
                    ans[j+1] = temp;
                }
            }
        }
        puts(ans);
    }
    return 0;
}