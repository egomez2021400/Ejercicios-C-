#include <iostream>
using namespace std;

int main()
{
    int hora;

    cout << "Digite la hora de llegada (formato 24 horas, solo el número entero de la hora): ";
    cin >> hora;

    if (hora <= 9)
    {
        cout << "Llegada a tiempo :D" << endl;
    }
    else 
    {
        cout << "Llegada tarde :(" << endl;
    }

    cout << "Programa terminó con éxito!" << endl;
    return 0;
}

