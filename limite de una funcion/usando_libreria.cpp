#include <iostream>
#include <cmath>
#include <string>
#include "exprtk.hpp" // asegúrate de tener este archivo

using namespace std;

double valor_x;

void evaluar_funcion(const string& funcion_usuario) {
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;

    symbol_table_t symbol_table;
    symbol_table.add_variable("x", valor_x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    if (!parser.compile(funcion_usuario, expression)) {
        cout << "❌ Error al compilar la función." << endl;
        cout << "Mensaje: " << parser.error() << endl;
        return;
    }

    cout << "Limite: " << expression.value() << endl;
}

int main() {
    cout << "=== Calculadora de Limites ===\n";
    cout << "Escriba la función \n";
    cout << "Ingresa un valor para x: ";
    cin >> valor_x;

            cin.ignore(); // limpiar el buffer del enter anterior
            string funcion;
            cout << "Escribe tu función en x (ej: x^2 + 3*x - 5): ";
            getline(cin, funcion);
            evaluar_funcion(funcion);

    return 0;
}
