#include <stdio.h>
int main(){
    int i,dimension,s=0,max=0,position,j;
    printf("entre un valeur int: ");
    scanf("%d",&dimension);
    while (dimension>50 || dimension==0)
    {
        printf("(dimension maximale: 50 composantes)\n: ");
        printf("entre un valeur int : ");
        scanf("%d",&dimension);
    }
    int t[dimension];
    position=0;
    for(i=0;i<dimension;i++){
        printf ("entree la valeur d index %d:",i+1);
        scanf("%d",&t[i]);
        s+=t[i];
        if (i==0) max=t[0];
        if (t[i]>max){
            max=t[i];
            position=i;
        } 
        if (t[i]!=0){
            t[j]=t[i];
            j++;
        }
    } 
    printf("\n\n-------------------------\n");
    printf("le tableu sans la valeur 0:\n");
    for (i=0;i<j;i++){
        printf("----> %d\n",t[i]);
    }
    printf("\n-------------------------\n");
    printf("la somme de tableu: %d\n",s);
    printf("\n-------------------------\n");
    printf("la valeur max de ce tableu est :%d est ca position %d\n",max,position+1);
    printf("\n-------------------------\n");
    return 0;
}
