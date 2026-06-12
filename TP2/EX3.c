#include <stdio.h>
int main(){
    int A[]={12,123,4,5,6,7,5,3,23,2,5,2};
    int x,j=0;
    int *p1=A,*p2=A;
    printf("doner la valeur de X:");
    scanf("%d",&x);
    for (p1=A;p1<A+12;p1++){
        if (*p1!=x){
            *p2=*p1;
            p2++;
        }
    }
    for (p1=A ;p1 < p2; p1++) {
        printf("%d ", *p1);
    }
    return 0;
}