#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y
};
int main(){
struct point p1 ={2,3};
struct point p2 ={4,1};
printf("%f",sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)));

}