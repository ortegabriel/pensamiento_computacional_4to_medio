#include <iostream>
#include <cmath>
using namespace std;
int opcion;
int opcion_menu;
double valor_x;

void mostrar_menu()
{

    do
    {
        cout << "¿Qué operación desea realizar?" << endl;
        cout << "1. Elevar a la potencia" << endl;
        cout << "2. Multiplicar" << endl;
        cout << "3. Dividir" << endl;
        cout << "4. Sumar" << endl;
        cout << "5. Restar" << endl;
        cout << "6. Salir" << endl;

        cout << "Ingrese su opción: ";
        cin >> opcion_menu;
        if (cin.fail() || opcion < 1 || opcion > 5) {
        cout << "Opción no válida. Por favor, intente de nuevo." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
    } while (cin.fail() || opcion_menu < 1 || opcion_menu > 6);

    if (opcion_menu == 6)
    {
        cout << "Saliendo del programa..." << endl;
    }
}

int main()
{
    cout << "=== Calculadora de Límites ===\n \n";
    cout << "Ingrese un valor para x: ";
    cin >> valor_x;

    do
    {
        cout << "Seleccione una funcion para calcular su límite:\n";
        cout << "1. Función Lineal" << endl;
        cout << "2. Función Cuadrática" << endl;
        cout << "3. Función Exponencial" << endl;
        cout << "4. Función Logarítmica" << endl;
        cout << "5. Salir" << endl
             << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (cin.fail() || opcion < 1 || opcion > 5)
        {
            cout << "Opción no válida. Por favor, intente de nuevo." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (cin.fail() || opcion < 1 || opcion > 5);

    if (opcion == 5)
    {
        cout << "Saliendo del programa..." << endl;
        return 0;
    }

    mostrar_menu();
}

// calculadora

// funciones matemáticas
float multiplicar(double a, double b)
{
    return a * b;
}
