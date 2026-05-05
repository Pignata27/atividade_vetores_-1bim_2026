#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int m[5][5], num, achou=0;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j] = rand()%101;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]==num){
                printf("\nEncontrado em [%d][%d]", i, j);
                achou=1;
            }
        }
    }

    if(!achou) printf("\nNao encontrado");

    getch();
}