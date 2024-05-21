/*Almacenar 6 elementos flotantes*/
#include <stdio.h>
int main()
{
    float arreglo [6];

    arreglo [0]=7.2;
    arreglo [1]=7.2;
    arreglo [2]=7.2;
    arreglo [3]=7.2;
    arreglo [4]=7.2;
    arreglo [5]=7.2;
    
    printf("El valor de los arreglos son: \n");
    printf("El valor del elemento 1 es: %.10f\n", arreglo [0]);
    printf("El valor del elemento 1 es: %f\n", arreglo [1]);
    printf("El valor del elemento 1 es: %f\n", arreglo [2]);
    printf("El valor del elemento 1 es: %f\n", arreglo [3]);
    printf("El valor del elemento 1 es: %f\n", arreglo [4]);
    printf("El valor del elemento 1 es: %f\n", arreglo [5]);
  
    return 0;

}