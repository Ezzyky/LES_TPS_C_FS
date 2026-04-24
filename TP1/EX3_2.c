#include <stdio.h>
int main(){
    int n,age;
    char s;
    printf("donner un entier:");
    scanf("%d",&n);
    printf("donner votre sexe(F ou M):");
    scanf(" %c",&s);
    printf("donner votre l age:");
    scanf("%d",&age);
   if(n>=30){
       if(age >20 && s==('M'||'m')){
        printf("paient l'impot!");
       }
       else if (18>=age<=35 && s==('F'||'f'))
       {
        printf("paient l'impot!");
       }
       else{
        printf("ne paient pas d'impot!");
       }
    }
    return 0;
}