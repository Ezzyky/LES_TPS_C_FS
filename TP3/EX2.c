#include <stdio.h>
struct etudient
{
    char nom[20];
    char prenom[20];
    int note;
};

int main(){

    int i=0,n;
    printf ("doener la tille de tableu :");
    scanf("%d",&n);
    struct etudient tap[n];
    for (i=0;i<n;i++){
        printf("donner le nom d etudient %d :",i+1);
        scanf("%s",tap[i].nom);
        printf("donner le prenome d etudient %d :",i+1);
        scanf("%s",tap[i].prenom);
        printf("donner le note d etudient %d :",i+1);
        scanf("%d",&tap[i].note);
        while (tap[i].note < 0 || 20 < tap[i].note){
            printf("donner la valeur sur 20 !!: ");
            scanf("%d",&tap[i].note);
        }
        
    }
    for (i=0;i<n;i++)
    if (tap[i].note>=10)
    {
        printf("%d. %s %s : %d/20\n", 
               i + 1, 
               tap[i].prenom, 
               tap[i].nom, 
               tap[i].note);
    }

    }
    

