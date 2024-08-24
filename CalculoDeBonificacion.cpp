#include <iostream>
using namespace std;

int main()
{
    int Ingreso;
    int bonificacion;
    float total;

    cout << "Ingrese su ingreso anual: ";
    cin >> Ingreso;

    cout << "Ingrese su bonificacion (1-Excelente, 2-Bueno, 3-Regular, 4-Otro): ";
    cin >> bonificacion;

    if (bonificacion == 1) 
    {
        total = Ingreso * 0.10;
        cout << "El total de bonificacion es: Q" << total << endl;
        total = total + Ingreso;
        cout << "El total de Ingreso mas bonificacion es : " <<total <<endl;
    }
    else if (bonificacion == 2) 
    {
        total = Ingreso * 0.05;
        cout << "El total de bonificacion es: Q" << total << endl;
        total = total + Ingreso;
        cout << "El total de Ingreso mas bonificacion es : " <<total <<endl;
    }
    else if (bonificacion == 3) 
    {
        total = Ingreso * 0.02;
        cout << "El total de bonificacion es: Q" << total << endl;
        total = total + Ingreso;
        cout << "El total de Ingreso mas bonificacion es : " <<total <<endl;
    }
    else 
    {
        cout << "No hay bonificacion." << endl;
    }

    cout << "Programa termino con exito!" << endl;
    return 0;
}

