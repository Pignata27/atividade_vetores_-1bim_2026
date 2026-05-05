#include<stdio.h>
#include<conio.h>

void main(){
    char nomes[5][50];

    for(int i=0;i<5;i++){
        scanf("%s", nomes[i]);
    }

    for(int i=0;i<5;i++){
        printf("%s\n", nomes[i]);
    }
    getch();
}