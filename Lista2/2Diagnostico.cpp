#include <iostream>
using namespace std;

int main()
{
    int diag, diag2;
    cout << "Qual eh a sua enfermidade?" << endl
         << "(1 para Febre)/(2 para dores no corpo)\n(3 para olhos vermelhos e aparencia palida)/"
         << "(4 para tosse)\n(5 para inflamacao)(6 para outros)\n";
    cin >> diag;
    cout << "Qual eh a sua outra enfermidade?\n";
    cin >> diag2;
    if ((diag >= 1) && (diag <= 6) && (diag2 >= 1) && (diag2 <= 6))
    {
        if (((diag == 1) && (diag2 == 2)) || ((diag2 == 1) && (diag == 2)))
            cout << "Seu diagnostico eh o 1: febril e dores no corpo";
        if (((diag == 3) && (diag2 == 2)) || ((diag2 == 3) && (diag == 2)))
            cout << "Seu diagnostico eh o 2: dores no corpo , olhos vermelhos e aparencia palida";
        if (((diag == 4) && (diag2 == 5)) || ((diag2 == 4) && (diag == 5)))
            cout << "Seu diagnostico eh o 3: tosse e inflamacao";
        if ((diag == 6) && (diag2 == 6))
            cout << "Seu diagnostico eh o 4: outras enfermidades";
    }
    else
        cout << "Diagnostico invalido";
}
