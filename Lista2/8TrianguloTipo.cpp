#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Digite 3 lados do triangulo" << endl;
    cin >> a >> b >> c;
    if ((a < b + c) && (b < a + c) && (c < b + a))
        if ((a == b) && (b == c))
            cout << "Equilatero";
        else if ((a == b) || (b == c) || (c == a))
            cout << "Isosceles";
        else
            cout << "Escaleno";
    else
        cout << "Nao forma os lados de um triangulo";
}