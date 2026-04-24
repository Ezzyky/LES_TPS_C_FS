#include <stdio.h>
int a=20 ,b=5 ,c=-10,d=2 , x=12 , y=15;
int main(){
    printf("%d\n",(5*x)+2*((3*b)+4));
    printf("%d\n",(5*(x+2)*3)*(b+4));
    printf("%d\n",a==(b=5));
    printf("%d\n",a+=(x+5));
    printf("%d\n",a!=(c*=(-d)));
    printf("%d\n",a*=d++);
    printf("%d\n",a%=++d);
    printf("%d\n",(x++)*(a+c));
    printf("%d\n",a=x*(b<c)+y*!(b<c));
    return 0;
}