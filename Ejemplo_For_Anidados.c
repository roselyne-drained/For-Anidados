//
// Created by usuario on 23/11/2024.
//
#include <stdio.h>
#include <conio.h>
//Declarar funciones.
void loop();
void piramide();

int main(void) {
    //Llamar a la funcion.
    loop();
    piramide();
    return 0;
}
//Definir funciones.
void loop() {
    //Declarar variables.
    int i = 0;
    int j = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Valores i=%d, j=%d \n", i, j);
        }
    }
}
void piramide() {
    int i = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\n%d", i, j);
        }
    }

}