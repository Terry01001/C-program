#include "stdio.h"
#include "string.h"

int main(void){
    char str[1000001],substr[1000001];
    while(1){
        int max = 0;
        scanf("%s",str);
        if(strcmp(str,".")==0) break;
        int strLen = strlen(str);
        for(int i = 1;i<=strLen;i++){
            int substrLen = strLen / i;
            if(strLen % substrLen != 0) continue;
            for(int j = 0;j<strLen;j+=substrLen){
                for(int k = 0;k<substrLen;k++){
                    substr[j+k] = str[k];
                }
            }
            substr[strLen] = '\0';
            if(strcmp(str,substr) == 0) max = i;
        }
        printf("%d\n",max);
    }
    return 0;
}


