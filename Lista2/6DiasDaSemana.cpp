#include <iostream>

using namespace std;

int main()
{
    int dia;
    cout << "Informe o numero do dia da semana:(0 a 6) ";
    cin >> dia;
    if (dia == 0)
        cout << "Domingo";
    if (dia == 1)
        cout << "Segunda-feira";
    if (dia == 2)
        cout << "Terca-feira";
    if (dia == 3)
        cout << "Quarta-Feira";
    if (dia == 4)
        cout << "Quinta-feira";
    if (dia == 5)
        cout << "Sexta-feira";
    if (dia == 6)
        cout << "Sabado";
}