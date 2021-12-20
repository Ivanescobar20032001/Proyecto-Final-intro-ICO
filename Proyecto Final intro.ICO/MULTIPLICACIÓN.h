// MULTIPLICACIÓN.cpp : Este archivo contiene la función "main". 
//

#include <iostream>

int main()
{
    int numero1, numero2, multiplicacion;
    printf("Intruzca primer digito\n");
    scanf_s("%d", &numero1);
    printf("Intruzca segundo digito\n");
    scanf_s("%d", &numero2);
    multiplicacion = numero1 * numero2;
    printf("El resultado de la multiplicacion es: %d", multiplicacion);
}

