#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float M, vverde, vvermelho, vroxo, vamarelo;
    float yverde, yvermelho, yroxo, yamarelo;

    scanf("%f", &M);
    scanf("%f %f %f %f", &yverde, &yvermelho, &yroxo, &yamarelo);
    
    vverde = 80 / yverde;
    vvermelho = 100 / yvermelho;
    vroxo = 120 / yroxo;
    vamarelo = 80 / yamarelo;
    
    if (M <= yverde && M <= yvermelho && M <= yroxo && M <= yamarelo) {
        printf("Acho que vou a pe :(");
    }
    else {
        if (vverde >= vvermelho && vverde >= vroxo && vverde >= vamarelo && M >= yverde) {
            printf("Verde");
        }
        else if (vvermelho >= vverde && vvermelho >= vroxo && vvermelho >= vamarelo && M >= yvermelho) {
            printf("Vermelho");
        }
        else if (vroxo >= vverde && vroxo >= vvermelho && vroxo >= vamarelo && M >= yroxo) {
            printf("Roxo");
        }
        else if (vamarelo >= vverde && vamarelo >= vvermelho && vamarelo >= vroxo && M >= yamarelo) {
            printf("Amarelo");
        }
    }

    return 0;
}
