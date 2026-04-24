#include <stdio.h>
int tap(int A[], int B[],int N ){
    int c=0,i;
        for (i=0;i<N;i++){
            if (A[i]==B[i]){
                c++;
            }
        }
    return c;
}