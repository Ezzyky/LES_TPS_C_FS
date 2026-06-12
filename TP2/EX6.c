#include <stdio.h>

    void puissance(int b, int n,int *res) {
        int i ;
        *res=1;
        for(i=1;i<=n;i++){
            *res*=b;
        }
        
    }
    int main(){
        int a;
        puissance(3,2,&a);
        printf("%d",a);
    }
