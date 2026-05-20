#include <stdio.h>
int main(){
    int n;
    float p=0;
    printf("donner un entier:");
    scanf("%d",&n);
    if (n>=30){
       p=n-(n*0.2);
       printf("%2.f",p);
    }
    else {
        printf("%d",n);
    }
    return 0;
}