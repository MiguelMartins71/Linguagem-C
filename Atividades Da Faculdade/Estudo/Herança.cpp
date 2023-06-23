//
// Created by miguel.carvalho on 22/06/2023.
//
#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Pessoa{

protected:
    int idade;
    string nome;
public:

    Pessoa( string _nome, int _idade);
    ~Pessoa();
    virtual void mostra(void);


};
Pessoa::Pessoa(string _nome, int _idade) {

nome = _nome;
idade = _idade;

}
Pessoa::~Pessoa(){

    cout << "Classe Destruída";
}

void Pessoa::mostra()
{
    cout << "Mostra Pessoa:" << endl;
    cout << "Nome :" << nome << endl;
    cout << "Idade" << idade << endl;


}

// Classe filha

class Cliente : public Pessoa{

private:
    int salario;
public:
    Cliente( string _nome, int _idade, int _salario);
    void mostra();

};

Cliente::Cliente( string _nome, int _idade, int _salario) : Pessoa(_nome, _idade){

salario = _salario;

}

void Cliente::mostra() {

    Pessoa::mostra();

    cout << "Client Mostra" << endl;
  // cout << "Nome" << nome << endl;
   //cout << "Idade" << idade << endl;
   cout << "Salario" << salario << endl;

}



int main(){

Cliente cliente =  Cliente("Miguel", 30 , 1000);

cliente.mostra();


}