#include <stdio.h>
int main (){
    int A[]={1,2,3,23,2,3,4,23,1,2};
    int *p1=A+9,*p2=A;
      for (p1 ; p1 >= p2; p1--) {
        printf("%d ", *p1);
    }
    return 0 ;
}