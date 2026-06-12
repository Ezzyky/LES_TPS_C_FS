#include <stdio.h>
#include <string.h>

struct fonctionnaire
{
    char nom[20];
    int age;
    float taille;
};

int compare_age(int a,int b){
    if (a>=b) return a;
    if (b>=a) return b;
}
float moyenne_tailles(float a,float b){
    return (a+b)/2;
}


