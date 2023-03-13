#include <stdio.h>

int main()
{
    long long int n, a , b, ab, c, d, e, sT, sA, sAr, sB, sBr, sAB, sABr, res;
    
    scanf("%lld", &n);
    scanf("%lld %lld", &a, &b);
    
    // Soma dos multiplos de A
    
    c = n / a;
    sA = a + (c - 1) * a;
    sAr = (sA + a) * c / 2;
    
    // Soma dos multiplos de B
    
    d = n / b;
    sB = b + (d - 1) * b;
    sBr = (sB + b) * d / 2;
    
    // Multiplos de A * B
    
    ab = a * b;
    e = n / ab;
    sAB = ab + (e - 1) * ab;
    sABr = (sAB + ab) * e / 2;
    
    // Resultado
    
    sT = (1 + n) * n / 2;
    res = sT - sAr - sBr + sABr;
    
    printf("%lld\n", res);
    
    if (res % 2 == 0)
        printf("Lá ele!!!");
    else printf("Opa xupenio AULAS...");
    
    return 0;
}
