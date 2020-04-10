#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V1, V2;
    printf("Calculadora Logica");
    printf("Digite a Primeira e Segunda Variaveis, lembre-se de usar 0 pra falso e 1 pra verdadeiro:\n");
    printf("\n");
    printf("Primeira Variavel(p) =");
    scanf("%d",&V1);
    printf("Segunda Variavel(q) =");
    scanf("%d",&V2);
    printf("\n");
    int op;
    printf("Selecione a operação digitando seu numero:\n");
    printf("---------------------------------------------");
    printf("1 - ~ p");
    printf("2 - ~ q");
    printf("3 - p ^ q");
    printf("4 - p v q");
    printf("5 - p -> q");
    printf("6 - p <-> q");
    printf("7 - p v q");
    printf("      -  ");
    printf("8 - cancelar \n");
    printf("---------------------------------------------");
    scanf("%d", &op);
    if (op==1){
        if (V1==1){
                printf("Falso");
        }else{
                printf("Verdadeiro");
        }
    }
    if (op==2){
         if (V2==1){
                printf("Falso");
        }else{
                printf("Verdadeiro");
        }
    }
    if (op==3){
        if (V1==1 && V2==1){
                printf("Verdadeiro");
            }else{
                printf("Falso");
        }
    }
    if (op==4){
        if (V1==0 && V2==0){
                printf("Falso");
            }else{
                printf("Verdadeiro");
            }
    }
    if (op==5){
        if(V1==1 && V2==1 || V1==0 && V2==1){
            printf("Verdadeiro");
        }else{
            printf("Falso");
        }
    }
    if (op==6){
        if (V1==1 && V2==1 || V1==0 && V2==0){
                printf("Verdadeiro");
        }else{
                printf("Falso");
            }
    }
    if (op==7){
        if (V1==1 && V2==1 || V1==0 && V2==0){
                printf("Falso");
        }else{
                printf("Verdadeiro");
            }
    }else{
        printf("Cancelar");
    }
    return 0;
}
