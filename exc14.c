#include<stdio.h>
#include<conio.h>

void main(){
    int v[10], maior, menor, pMaior=0, pMenor=0;

    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
    }

    maior=menor=v[0];

    for(int i=1;i<10;i++){
        if(v[i]>maior){
            maior=v[i];
            pMaior=i;
        }
        if(v[i]<menor){
            menor=v[i];
            pMenor=i;
        }
    }

    printf("Maior: %d pos %d\nMenor: %d pos %d", maior, pMaior, menor, pMenor);
    getch();
}