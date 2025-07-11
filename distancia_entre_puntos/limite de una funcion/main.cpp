#include <iostream>
#include <cmath>
using namespace std;
float valor_x;
float respuesta_numerica;
char respuestasn = 'n';
float multiplicador_x;
float sumador_x;

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
    cout << "¿Desea multiplicar la funcion x^2? s/n" << endl;
    cin >> respuestasn;
    if (respuestasn == 's' ){
        cout << "Por cuanto desea multiplicar x^2: ";
        cin >> multiplicador_x;
        cout << "Su funcion es: " << multiplicador_x << " * x^2" << endl;
        cout << "¿Desea sumar la funcion " << multiplicador_x << " * x^2? s/n" << endl;
        cin >> respuestasn;
        if (respuestasn == 's' ){
             cout << "Por cuanto desea sumar la funcion " << multiplicador_x << " * x^2"  << endl;
             cin >> sumador_x;
             cout << "Su funcion es: " << multiplicador_x << " * x^2" << " + (" << sumador_x <<")";
        }

    } //
    //cout << "Escriba un valor para x" << endl;
    //cin >> valor_x;
    //cout << 
    
    
    
    // cout << "Su funcion es " << valor_x << "^2" << endl;
    // cout << "El limite de la funcion es: " << (valor_x*valor_x);
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