#include <stdio.h>
int main(){
    char T[20];
    int n=0;
    printf("donner un char");
    scanf("%s",&T);
    char *p=T;
    for (;*p!='\0';p++){
        p++;
    }
    printf("%d",p-T);
    return 0;
}