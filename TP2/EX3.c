#include <stdio.h>
int main(){
    int i=0,x;
    int T[]={12,12,245,123,235,123,123,13,234,1,23,5,43,234,23,1,34,2,1,24};
    int *p1,*p2;
    p2=T;
    p1=T;
    printf("entrez un nombre :");
    scanf("%d",&x);
    for (i = 0; i < 20; i++)
    {
        if (*(p1+i) != x)
        {
            *p2 = *(p1+i);
            *p2++;
        }
    }

    for ( p1 = T; p1 < p2; p1++)
    {
         printf("%d,", *p1);
    }
    
    
return 0;
}