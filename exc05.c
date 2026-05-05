#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int v[25], num, achou=0;
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i] = rand()%101;
        printf("%d ", v[i]);
    }

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    for(int i=0;i<25;i++){
        if(v[i]==num){
            printf("\nEncontrado na posicao %d", i);
            achou=1;
        }
    }

    if(!achou) printf("\nNao encontrado");

    getch();
}