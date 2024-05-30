#include <iostream>
using namespace std;

int main()
{
    char emp[30], cli[20];
    int cnpj, regiao, itens;
    cout << "Digite o nome da empresa: ";
    cin >> emp;
    cout << "Digite o CNPJ: ";
    cin >> cnpj;
    cout << "Digite os dados do cliente(nome, cidade, bairro, rua, CEP, nro casa)(usando/no lugar de espaco): ";
    cin >> cli;
    cout << "Digite o total de intens da compra(5 reais cada): ";
    cin >> itens;
    cout << "Digite a regiao[1 para Norte] [2 para Nordeste] [3 para Centro-Oeste] [4 para Sudeste] [5 para Sul]: ";
    cin >> regiao;
    cout << "Total de itens:" << itens << endl
         << "Valor sem frete: " << (itens * 5) << endl;
    if (regiao == 1)
        cout << "Valor com frete:" << ((itens * 5) * 1.10) << " Regiao Norte";
    if (regiao == 2)
        cout << "Valor com frete:" << ((itens * 5) * 1.08) << " Regiao Nordeste";
    if (regiao == 3)
        cout << "Valor com frete:" << ((itens * 5) * 1.12) << " Regiao Centro-Oeste";

    if (regiao == 4)
        cout << "Valor com frete:" << ((itens * 5) * 1.15) << "Regiao Sudeste";
    if (regiao == 5)
        cout << "Valor com frete:" << ((itens * 5) * 1.11) << "Regiao Sul";

    cout << "\nNome da empresa e o CNPJ: " << emp << cnpj << endl
         << "Dados do cliente: " << cli;
}
