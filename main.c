#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n, m;
    int n2, m2;
    srand(time(NULL));

    printf("Ingresar el numero de filas de la primera matriz: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas de la primera matriz: ");
    scanf("%d", &m);
    printf("Ingresar el numero de filas de la segunda matriz: ");
    scanf("%d", &n2);
    printf("Ingresar el numero de columnas de la segunda matriz: ");
    scanf("%d", &m2);

    int matriz[n][m];
    int matriz[n2][m2];

    


    return 0;
}