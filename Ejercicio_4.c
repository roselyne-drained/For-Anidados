//
// Created by Roselyne on 22/11/2024.
//
#include <stdio.h>
//Declarar funciones.
void loop();

int main(void)
{
    /*Elabore un programa para calcular cada uno de los valores de y en la ecuación:
    y=3x+5 donde x toma valores de 1 a 20, en incrementos de 1 en 1.*/
    //Llamar a la funcion.

    loop();

    return 0;
}
//Definir funciones.

void loop() {
    int x;
    int y;

    for (x = 0; x < 20; x++)
    {
        y = 3 * x + 5;
        printf("Si x vale: %d\n", x);
        printf("El valor de y es: %d\n", y);
    }

}