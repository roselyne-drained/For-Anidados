//
// Created by Roselyne on 23/11/2024.
//
#include <stdio.h>
//Declarar funciones.
void piramide_alreves();
void piramide_derecha();
void piramide_izquierda();
void piramide_abajo_d();
void piramide_abajo_i();


int main(void) {
    //Desplegar una piramide con el numero de filas y numero de columnas.
    //Llamar a la funcion.
    piramide_alreves();
    piramide_derecha();
    piramide_izquierda();
    piramide_abajo_d();
    piramide_abajo_i();
    return 0;
}
//Definir funciones.
void piramide_derecha() {
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
void piramide_abajo_d(){
    int filas = 0;
    int columnas = 0;

    printf("Ingrese el numero de filas:\n");
    scanf("%d", &filas);

    for (int intentos = filas; intentos >= 1; intentos--)
    {
        for (columnas = 1; columnas <= intentos; columnas++)
        {
            printf("%d ",columnas);
        }
        printf("\n");
    }
}
