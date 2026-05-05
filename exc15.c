#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
    char nomes[5][50], aux[50];

    for(int i=0;i<5;i++){
        scanf("%s", nomes[i]);
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(nomes[i],nomes[j])>0){
                strcpy(aux,nomes[i]);
                strcpy(nomes[i],nomes[j]);
                strcpy(nomes[j],aux);
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%s\n", nomes[i]);
    }
    getch();
}