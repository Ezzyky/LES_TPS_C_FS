#include <stdlib.h>
#include <stdio.h>
int main (){
    int N,i;
    scanf("%d",&N);
    int *p;
    p=malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        printf("%d\n",*p);
    }
    free(p);
    
    return 0;
}