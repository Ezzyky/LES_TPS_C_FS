#include <stdio.h>
#include <string.h>
int tap(int A[], int B[]  ){
    int c=0,i;
    if (sizeof(A)==sizeof(B)){
        for (i=0;i<sizeof(A);i++){
            if (A[i]==B[i]){
                c++;
            }
        }
    }
    return c;
}