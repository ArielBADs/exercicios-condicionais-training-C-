#include <stdio.h>

int main() {
    int p1, p2, p3, p4, p5, p6, p7, p8;
    int contador = 0;
    
    scanf("%i", &p1);
    scanf("%i", &p2);
    scanf("%i", &p3);
    scanf("%i", &p4);
    scanf("%i", &p5);
    scanf("%i", &p6);
    scanf("%i", &p7);
    scanf("%i", &p8);
    
    if (p1 == p2 || p1 == p4 || p1 == p6 || p1 == p8) {
        if (p1 == p2) {
            printf("Alguem nao esta satisfeito...\n");
        }
        else{
            if (p2 == p4) {
                printf("Alguem nao esta satisfeito...\n");
            }
            else{
                if (p7 == p8) {
                    if (p4 != p3) {
                        printf("Alguem nao esta satisfeito...\n");}
                }
                else{
                    if (p8 != p6 && p8 != p7) {
                        printf("Alguem nao esta satisfeito...\n");}
                    else {
                        if (p4 == p5) {
                           if (p6 != p1) {
                               printf("Alguem nao esta satisfeito...\n");
                           }
                           else {
                               printf("Conseguimos times suficientes!\n");
                           }
                        }
                        else {
                            if (p6 == p1) {
                                printf("Alguem nao esta satisfeito...\n");
                            }
                            else {
                                printf("Conseguimos times suficientes!\n");
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        printf("Alguem nao esta satisfeito...\n");
    }
    return 0;
}
