#include<stdio.h>
#include<conio.h>

void main(){
    float m[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%f",&m[i][j]);
        }
    }

    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            printf("%.1f ", m[i][j]);
        }
        printf("\n");
    }
    getch();
}