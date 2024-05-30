#include <iostream>

using namespace std;

int main()
{
    int a, c, d, f;
    cout << "Quantas pessoas moram na casa em que voce mora?\n";
    cin >> a;
    if (a >= 1)
    {
        {
            cout << "Qual a idade da mais velha\n";
            cin >> c;
            cout << "Voce divide o quarto com outras pessoas?\n";
            cin >> d;
            cout << "Ha quantos meses vivem na mesma casa?\n";
            cin >> f;
            cout << "Mora com " << a << " pessoa(s)\n";
            cout << "A idade da mais velha eh " << c;
            cout << "\nVoce divide o quarto com "
                 << d << " pessoas\n"
                 << "Vive juntos a esse(s) mes(es)= " << f;
        }
    }
    else
        cout << "Mora sozinho";
}
