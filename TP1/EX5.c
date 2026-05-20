#include <stdio.h>
int main(){
    char M[20],m;
    int i,j=0;
    printf("entrer une chaine: ");
    scanf("%s",M);
    printf("ère entrépar ");
    scanf(" %c",&m);
    for (i=0;M[i] != '\0';i++){
        if(M[i]!=m){
            M[j]=M[i];
            j++;
        }
    }
    M[j] = '\0';
    printf("chaine apres suppression: %s\n", M);
    return 0;
}