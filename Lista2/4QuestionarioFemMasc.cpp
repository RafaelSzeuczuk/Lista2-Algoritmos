#include <iostream>

using namespace std;

int main()
{
    int sexo, idade, grav, filh, velh;
    cout << "Qual eh seu sexo (1 para Femininio)(2 para Masculino)?";
    cin >> sexo;
    if (sexo == 1)
    {
        cout << "Qual eh a sua idade?";
        cin >> idade;
        if (idade > 10)
        {
            cout << "Ja engravidou(1 para Sim)(2 para Nao)?";
            cin >> grav;
            if (grav == 1)
            {
                cout << "Quantos filhos voce tem?";
                cin >> filh;
                cout << "Qual a idade do mais velho?";
                cin >> velh;
            }
        }
        cout << "Seu sexo eh feminino,\nsua idade eh de " << idade << " anos.\n";
        if (grav == 1)
            cout << "Voce tem " << filh << " filho(s) e a idade do mais velho eh de " << velh << " anos.";
        else
            cout <<"Voce nao engravidou";
    }
    else
        cout << "Quantos filhos voce tem?";
    cin >> filh;
    if (filh >= 1)
    {
        cout << "Qual a idade do mais velho?";
        cin >> velh;
    }
    cout << "Seu sexo eh masculino\n";
    if (filh >= 1)
        cout << "Voce tem " << filh << "filho(s) e a idade do mais velho eh " << velh << "anos";
}