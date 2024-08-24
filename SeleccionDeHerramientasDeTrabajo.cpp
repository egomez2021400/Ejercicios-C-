#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "Por favor, selecciona una opcion:\n";
    cout << "1. Crear un documento de texto.\n";
    cout << "2. Editar una hoja de calculo.\n";
    cout << "3. Diseñar una presentacion.\n";
    cout << "4. Enviar un correo electronico.\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "Has elegido crear un documento de texto." << endl;
            break;
        case 2:
            cout << "Has elegido editar una hoja de calculo." << endl;
            break;
        case 3:
            cout << "Has elegido diseñar una presentacion." << endl;
            break;
        case 4:
            cout << "Has elegido enviar un correo electronico." << endl;
            break;
        default:
            cout << "Por favor, selecciona una opción valida." << endl;
    }

    return 0;
}

