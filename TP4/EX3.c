#include <stdio.h>
int fct(int n){
    if (n==0){
        return 1;
    }
    return n*fct(n-1);
}