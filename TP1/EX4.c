#include <stdio.h>
int main(){
    int i,n,s=0,max=0,p,j;
    do
    {
        printf("entre un valeur int (dimension maximale: 50composantes)");
        scanf("%d",&n);
    } while (n<=0 || n>50);
    int t[n];
   
    p=0;
    for(i=0;i<n;i++){
        printf ("entree la valeur d index %d:",i+1);
        scanf("%d",&t[i]);
        s+=t[i];
    } 
    max=t[0];
    for(i=0;i<n;i++){
       if (t[i]>max){
            max=t[i];
            p=i;
        } 
    for(i=0,j=0;i<n;i++){
       if (t[i]!=0){
            t[j]=t[i];
            j++;
        } 
        
    }
    printf("la somme de tableu :%d",s);
    printf("la valeur max de ce tableu est :%d \n est ca position %d",max,p+1);
}
    return 0;

}