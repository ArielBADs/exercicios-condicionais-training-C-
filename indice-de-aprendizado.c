#include <stdio.h>
int main()
{
    double i[3], x[3], y[3];
    int k[3], j;
    
    for (j = 0 ; j < 3;j ++) scanf("%lf %lf %d", &x[j], &y[j], &k[j]);

    for(j=0 ; j < 3 ; j++) {
    i[j] = (x[j] * x[j] * 2.71) / y[j];
    if (i[j] < 0) i[j]= i[j] * (-1);
    if (y[j] == 0) i[j] = 0;
    }
    
    for(j = 0 ; j < 3 ; j++)
    if (i[j] < 32.5)
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.\n", k[j], i[j]);
    else if (i[j] <= 63.9)
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.\n", k[j], i[j]);
    else if (i[j] <= 127.9)
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.\n", k[j], i[j]);
    else if (i[j] <= 255.9)
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.\n", k[j], i[j]);
    else if (i[j] <= 512)
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.\n", k[j], i[j]);
    else
        printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.\n", k[j], i[j]);

return 0;
}
