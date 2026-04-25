#include <stdio.h> 
int main(){
    int x,y;
    int *p1,*p2;
    p1=&x ;
    p2=&y;
    *p1=15;
    *p2=30;
    printf("%d +%d=%d",*p1,*p2,*p1+*p2);

    return 0;
}