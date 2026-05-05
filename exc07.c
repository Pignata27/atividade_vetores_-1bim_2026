#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int v[25], op, aux;
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i]=rand()%101;
    }

    printf("1-Crescente\n2-Decrescente\n");
    scanf("%d",&op);

    for(int i=0;i<25;i++){
        for(int j=i+1;j<25;j++){
            if((op==1 && v[i]>v[j]) || (op==2 && v[i]<v[j])){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    for(int i=0;i<25;i++){
        printf("%d ", v[i]);
    }
    getch();
}