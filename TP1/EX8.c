#include <stdio.h>
float neg(float T[],float TNGE[],int n){
    int i,j=0;
    for(i=0;i<n;i++){
        if (T[i]<=0){
            TNGE[j]=T[i];
            j++;
        }
    }
    return j;
}
int main (){
    float A[10] = {12,123,-142,-1414,-124124,12414,3,3532,2,234},B[10];
    ;
     for (int i = 0; i < neg(A,B,10); i++) {
        printf("%f ", B[i]);
    }
    return 0;
}

