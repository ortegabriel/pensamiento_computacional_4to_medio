#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // variables
    int x1;
    float y1;
    float x2;
    float y2;
    float base;
    float altura;
    float hipotenusa;

    // primer punto
    cout << "Ingrese un punto x: ";
    cin >> x1;
    cout << "Ingrese un punto y: ";
    cin >> y1;
    cout << endl << "Su primer punto es: " << "(" << x1 << "," << y1 << ")" << endl;

    // segundo punto
    cout << "Ingrese un punto x: ";
    cin >> x2;
    cout << "Ingrese un punto y: ";
    cin >> y2;
    cout << endl << "Su segundo punto es: " << "(" << x2 << "," << y2 << ")" << endl;

    // calculo distancia
    base = x2 - x1;
    altura = y2 - y1;
    hipotenusa = sqrt((base * base) + (altura * altura));

    // mostrar mensaje
    cout << "La distancia entre los dos puntos es de: " << hipotenusa;



}