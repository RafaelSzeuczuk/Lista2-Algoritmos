#include<iostream>
using namespace std;
int main(){
    float Salario,Alimentacao,Transporte,Educacao,porcAlimentacao,porcTransporte,porcEducacao;
    cout<<"Digite seu salario:";
    cin>>Salario;
    cout<<"Digite seu gasto com alimentacao:";
    cin>>Alimentacao;
    cout<<"Digite seu gasto com transporte:";
    cin>>Transporte;
    cout<<"Digite seu gasto com educacao:";
    cin>>Educacao;

    porcAlimentacao=((Alimentacao/Salario)*100);
    porcTransporte=((Transporte/Salario)*100);
    porcEducacao=((Educacao/Salario)*100);
//Ordem decrescente
    cout<<"Ordem decrescente de gastos em porcentagem:"<<endl;
    if ((Alimentacao>=Transporte)&&(Alimentacao>=Educacao)){
        cout<<"Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";
            if (Transporte>Educacao){
            cout<<" Porcentagem de Transporte: "<<porcTransporte<<"%."
            <<" Porcentagem de Educacao: "<<porcEducacao<<"%.";}
            else 
            cout<< "Porcentagem de Educacao: "<<porcEducacao<<"%."
                <<" Porcentagem de Transporte: "<<porcTransporte<<"%.";}

    if ((Transporte>Alimentacao)&&(Transporte>=Educacao)){
        cout<<"Porcentagem de Transporte: "<<porcTransporte<<"%.";
            if (Alimentacao>Educacao){
            cout<<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%."
            <<" Porcentagem de Educacao: "<<porcEducacao<<"%.";}
            else 
            cout<<" Porcentagem de Educacao: "<<porcEducacao<<"%."
                <<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";}

    if ((Educacao>Alimentacao)&&(Educacao>Transporte)){
        cout<<"Porcentagem de Educacao: "<<porcEducacao<<"%.";
            if (Alimentacao>Transporte){
            cout<<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%."
            <<" Porcentagem de Transporte: "<<porcTransporte<<"%.";}
            else 
            cout<<" Porcentagem de Transporte: "<<porcTransporte<<"%."
                <<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";}

//Ordem crescente
    cout<<endl<<"Ordem crescente de gastos em porcentagem"<<endl;
    if ((Alimentacao<=Transporte)&&(Alimentacao<=Educacao)){
        cout<<"Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";
            if (Transporte<Educacao){
            cout<<" Porcentagem de Transporte: "<<porcTransporte<<"%."
            <<" Porcentagem de Educacao: "<<porcEducacao<<"%.";}
            else 
            cout<<" Porcentagem de Educacao: "<<porcEducacao<<"%."
                <<" Porcentagem de Transporte: "<<porcTransporte<<"%.";}

    if ((Transporte<Alimentacao)&&(Transporte<=Educacao)){
        cout<<"Porcentagem de Transporte: "<<porcTransporte<<"%.";
            if (Alimentacao<Educacao){
            cout<<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%."
            <<" Porcentagem de Educacao: "<<porcEducacao<<"%.";}
            else 
            cout<<" Porcentagem de Educacao: "<<porcEducacao<<"%."
                <<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";}

    if ((Educacao<Alimentacao)&&(Educacao<Transporte)){
        cout<<"Porcentagem de Educacao: "<<porcEducacao<<"%.";
            if (Alimentacao<Transporte){
            cout<<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%."
            <<"Porcentagem de Transporte: "<<porcTransporte<<"%";}
            else 
            cout<<" Porcentagem de Transporte: "<<porcTransporte<<"%."
                <<" Porcentagem de Alimentacao: "<<porcAlimentacao<<"%.";}

    if((Educacao+Alimentacao+Transporte)>Salario)
        cout<<endl<<"Um dos gastos ou a soma deles eh maior que o salario.";
}

