#include<stdio.h>
#include<conio.h>

void main(){
    int v[10], aux;

    // Ler os 10 números
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    // Ordenar em ordem decrescente
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // Mostrar resultado
    printf("\nOrdem decrescente:\n");
    for(int i=0;i<10;i++){
        printf("%d ", v[i]);
    }

    getch();
}