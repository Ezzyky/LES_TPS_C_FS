#include <stdio.h>
int main(){
    int n,p=0;
    printf("donner un entier:");
    scanf("%d",&n);
   if (n>=30){
       p=n-(n*(2/100));
    }
    return 0;
}