#include <stdio.h>
int main(){
    int A[]= {12,23,27,42,67,70,73,76,89,90};
int *p;
p=A;
printf("A :%d, B:%d, C :%d", *p+2, *(p+2),*(p+(*p-9)) );
return 0;
}