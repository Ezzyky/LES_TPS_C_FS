#include <stdio.h>
float somme (int tableu[],int taille){
    if (taille==0) return 0;
    return tableu[taille-1]+somme(tableu,taille-1);
}