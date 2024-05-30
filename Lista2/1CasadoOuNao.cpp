#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "Voce eh casado? (1 para sim)(2 para nao)\n";
    cin >> a;
    if (a == 1)
    {
        cout << "Informe o ano de casamento\n";
        cin >> b;
        if ((2024 - b) >= 2) {
            cout << "Digite o numero de filhos\n";
        cin >> c;
        if (c >= 1){ 
            cout << "Informe a idade do mais novo\n";
        cin >> d;}}
    }
    cout << "Digite sua pretensao salarial\n";
    cin >> e;
    if (a == 1)
    {
        cout << "\nO ano de casamento fornecido eh "<< b;
        if ((2024 - b) >= 2){
            cout << "\nO numero de filhos eh de "<< c;
        if (c >= 1){
            cout << "\nA idade do filho mais novo eh de"<< d;}}
    }
    if (a == 2) 
        cout << "Nao eh casado";

    cout << "\nSalario pretendido eh de "<< e;
}