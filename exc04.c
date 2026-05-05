#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int m[5][5], menor, li, co;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j] = rand()%101;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    menor = m[0][0]; li=0; co=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j] < menor){
                menor = m[i][j];
                li=i; co=j;
            }
        }
    }

    printf("\nMenor: %d\nPosicao: [%d][%d]", menor, li, co);
    getch();
}