// Proyecto Final intro.ICO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include "Suma.h"
#include "Masuno.h"
#include "MULTIPLICACION.h"
#include "Cuadrado.h"
#include "Divicion.h"

using namespace std;

int main()
{
    int elige;
    int a = 0;
    int b = 0;

    cout << "Que quieres hacer?\n" << endl;
    cout << "suma (1)\n" << endl;
    cout << "multiplicacion (2)\n" << endl;
    cout << "divicion (3)\n" << endl;
    cout << "tu numero elevado al cuadrado (4)\n" << endl;
    cout << "tu numero mas 1 (5)\n" << endl;
    cin >> elige; "\n";

    if (elige == 1)
    {
        cout << "escribe el primer numero: " << endl;
        cin >> a;
        cout << "escribe el segundo numero: " << endl;
        cin >> b;
        cout << "el resultado de " << a << " mas " << b << "es igual a: " << Suma(a, b);
    }
    if (elige == 2)
    {
        cout << "escribe el primer numero: " << endl;
        cin >> a;
        cout << "escribe el segundo numero: " << endl;
        cin >> b;
        cout << "el resultado de " << a << "por" << b << "es igual a: " << multi(a, b);
    }
    if (elige == 3)
    {
        cout << "escribe el primer numero: " << endl;
        cin >> a;
        cout << "escribe el segundo numero: " << endl;
        cin >> b;
        cout << "el resultado de " << a << "entre" << b << "es igual a: " << divicion(a, b);
    }
    if (elige == 4)
    {
        cout << "escribe tu numero" << endl;
        cin >> a;

        cout << "el resultado de " << a << " al cuadrado es igual a: " << cuadrado(a);
    }
    if (elige == 5)
    {
        cout << "escribe tu numero" << endl;
        cin >> a;

        cout << "el resultado de " << a << " mas 1 es igual a: " << masuno(a);
    }
}
