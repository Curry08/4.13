#include <stdio.h>

int main() {
    int scelta;
    float num1,num2;

    printf("SCELTA OPERAZIONI\n");
    printf("1)Addizione\n");
    printf("2)Sottrazione\n");
    printf("3)Moltiplicazione\n");
    printf("4)Divisione\n");
    printf("5)Esci\n");
    printf("Scelta:");
    scanf("%d",&scelta);
    while(1){
        switch(scelta){
            case(1):
                printf("Inserisci il primo numero: ");
            scanf("%f",&num1);
            printf("Inserisci il secondo numero: ");
            scanf("%f",&num2);
            printf("Il risultato è: %f",num1+num2);
            return 0;
            case(2):
                printf("Inserisci il primo numero: ");
            scanf("%f",&num1);
            printf("Inserisci il secondo numero: ");
            scanf("%f",&num2);printf("Il risultato è: %f ",num1-num2);
            return 0;
            case(3):
                printf("Inserisci il primo numero: ");
            scanf("%f",&num1);
            printf("Inserisci il secondo numero: ");
            scanf("%f",&num2);printf("Il risultato è: %f ",num1*num2);
            return 0;
            case(4):
                printf("Inserisci il primo numero: ");
            scanf("%f",&num1);
            printf("Inserisci il secondo numero: ");
            scanf("%f",&num2);printf("Il risultato è: %f ",num1/num2);
            return 0;
            case(5):return 0;
            default:
                printf("Opizione inesistente\n");
            printf("Scelta:");
            scanf("%d",&scelta);
        }
    }
}

