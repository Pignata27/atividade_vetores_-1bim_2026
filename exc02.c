#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    int v[25];
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i] = rand()%101;
        printf("%d\n", v[i]);
    }
    getch();
}