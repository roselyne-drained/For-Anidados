//
// Created by usuario on 23/11/2024.
//
#include <stdio.h>
//Declarar funciones.
void piramide();

int main(void) {
    //Desplegar una piramide con el numero de filas y numero de columnas.
    //Llamar a la funcion.
    piramide();
    return 0;
}
//Definir funciones.
void piramide() {
    int filas = 0;
    int columnas = 0;

    printf("Ingrese el numero de filas:\n");
    scanf("%d", &filas);

    for (int intentos; intentos <= filas; intentos++)
    {
        for (columnas = 1; columnas <= intentos; columnas++)
        {
            printf("%d ",columnas);
        }
        printf("\n");
    }

}