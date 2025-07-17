#include <iostream>
#include <cmath>
using namespace std;
float valor_x;
float respuesta_numerica;
char respuestasn = 'n';
float multiplicador_x;
float sumador_x;
int operacion;        
float exponente;

int main()
{
cout << "Elija Una funcion:" << endl;
cout << "1. Cuadratica: x^2" << endl;
cout << "2. lineal: x" << endl;
cout << "3. cubica: x^3" << endl << endl;

cin >> respuesta_numerica;
// Cuadratica
if (respuesta_numerica== 1) {
    cout << "Funcion Cuadratica x^2" << endl;
    cout << "¿Qué operación desea realizar?" << endl;
    cout << "1. Elevar a un número" << endl;
    cout << "2. Multiplicar por un número" << endl;
    cout << "3. Sumar un número" << endl;
    cin >> operacion;

    if (operacion == 1) {

        cout << "¿A qué exponente desea elevar x^2? ";
        cin >> exponente;
        cout << "Su funcion es: x^(" << 2 * exponente << ")" << endl;
        cout << "¿Qué operación desea realizar?" << endl;
        cout << "1. Elevar a un número" << endl;
        cout << "2. Multiplicar por un número" << endl;
        cout << "3. Sumar un número" << endl;
        cin >> operacion;



        cout << "Escriba un valor para x: ";
        cin >> valor_x;
        cout << "El resultado es: " << pow(valor_x, 2 * exponente) << endl;
    } else if (operacion == 2) {
        cout << "¿Por cuánto desea multiplicar x^2? ";
        cin >> multiplicador_x;
        cout << "Su funcion es: " << multiplicador_x << " * x^2" << endl;
        cout << "Escriba un valor para x: ";
        cin >> valor_x;
        cout << "El resultado es: " << multiplicador_x * pow(valor_x, 2) << endl;
    } else if (operacion == 3) {
        cout << "¿Qué número desea sumar a x^2? ";
        cin >> sumador_x;
        cout << "Su funcion es: x^2 + " << sumador_x << endl;
        cout << "Escriba un valor para x: ";
        cin >> valor_x;
        cout << "El resultado es: " << pow(valor_x, 2) + sumador_x << endl;
    } else {
        cout << "Opción no válida." << endl;
    }
};

// lineal
if (respuesta_numerica == 2) {
    cout << "Funcion Cuadratica x^2" << endl;
    cout << "Escriba un valor para x" << endl;
    cin >> valor_x;
    cout << "Su funcion es " << valor_x << endl;
    cout << "El limite de la funcion es: " << (valor_x);
}
// cubica
if (respuesta_numerica == 3) {
    cout << "Funcion Cuadratica x^3" << endl;
    cout << "Escriba un valor para x" << endl;
    cin >> valor_x;
    cout << "Su funcion es " << valor_x << "^3" << endl;
    cout << "El limite de la funcion es: " << (valor_x*valor_x*valor_x);
}





    return 0;

}