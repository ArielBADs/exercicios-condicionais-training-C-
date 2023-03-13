#include <stdio.h>

int main()
{
    int dia, mes, ano, cont = 0;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    
    if (dia>=1 && dia <= 31 && ano >= 1900 && ano <= 2100 && mes >= 1 && mes <= 12) {
        if (mes == 2) {
            if(ano % 4 == 0 && ano % 100 != 0 || ano % 400==0){
                if (dia <= 29) {
                    printf("valida");
                }
                else {printf("invalida");
                }
            }
            else {
                if (dia <= 28) {
                    printf("valida");
                }
                else {
                    printf("invalida");
                }
            }
        }
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if (dia <= 31) {
                printf("valida");
            }
            else {
                printf("invalida");
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia <= 30) {
                printf("valida");
            }
            else {
                printf("invalida");
            }
        }
    }
    else {
        printf("invalida");
    }

    return 0;
}
