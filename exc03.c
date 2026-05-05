#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int v[25], maior, pos;
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i] = rand()%101;
        printf("%d\n", v[i]);
    }

    maior = v[0]; pos = 0;

    for(int i=1;i<25;i++){
        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }

    printf("\nMaior: %d\nPosicao: %d", maior, pos);
    getch();
}