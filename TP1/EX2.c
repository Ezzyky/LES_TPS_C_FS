#include <stdio.h>
int main(){
    int n,chi,s=0;
    printf("donner un entier:");
    scanf("%d",&n);
    while (n!=0)
    {
        chi=n%10;
        s+=chi;
        n/=10;
    }
    printf("resulta %d",s);
    return 0;
}