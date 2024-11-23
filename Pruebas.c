//
// Created by usuario on 23/11/2024.
//
#include <stdio.h>
//Declarar funciones
void piramide_alreves();

int main(void) {
    //quiero una piramide con el numero de filas y columnas que el usuario coloque pero que vaya del numero mayor al menor de izquierda a dercha
    piramide_alreves();
    return 0;
}

void piramide_alreves() {
    int filas = 0;
    int columnas = 0;

    printf("Ingrese el numero de filas:\n");
    scanf("%d", &filas);

    for (int intentos = filas; intentos >= 1; intentos--)
    {
        for (int espacios = 0; espacios < filas - intentos; espacios++) {
            printf(" ");
        }
        for (columnas = intentos; columnas >= 1; columnas--)
        {
            printf("%d ",columnas);
        }
        printf("\n");
    }

}