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
    int matriz2[n2][m2];

    if (n=!n2 || m=!m2)
    {
        printf("La suma no puede ser dada por las matrices no son iguales entre si \n");
        return 0;
    }

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j]=rand()%100+1;
        }
        
    }

        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j])
        }
        
    }
    

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz2[i][j]=rand()%100+1;
        }
        
    }

        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz2[i][j])
        }
        
    }
    
            

    return 0;
}