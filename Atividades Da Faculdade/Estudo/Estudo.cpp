//
// Created by miguel.carvalho on 22/06/2023.
//
#include<iostream>
#include <conio.h>
#include <string>


using namespace std;

class Pessoa {

private:
    int id;
    string nome;
    int idade;
public:
     Pessoa(int _id, string _nome, int _idade);
     ~Pessoa();

    void setId(int _id);
    int getId();


    void setNome( string _nome );
    string getNome();

    void setIdade(int _idade);
    int getIdade();

};

 Pessoa::Pessoa(int _id, string _nome, int _idade){
    id = _id;
    nome = _nome;
    idade = _idade;

}

Pessoa::~Pessoa(){
     cout << "Classe destruída";
 }


void Pessoa::setId( int _id ){

    id = _id;
}

int Pessoa::getId(){

    return id;
}

void Pessoa::setIdade( int _idade ){

    idade = _idade;
}

int Pessoa::getIdade(){

    return idade;
}


void Pessoa::setNome( string _nome ){

    nome = _nome;
}

string Pessoa::getNome(){

    return nome;
}

int main(){

Pessoa amigo = Pessoa(1, "miguek", 19);

//amigo.id = 1;

//amigo.nome = "Miguel";

//amigo.idade = 19;

//amigo.setId(1);
cout << "ID" << amigo.getId();

//amigo.setNome("Miguel");
cout << "Nome " << amigo.getNome();
//amigo.setIdade(19);

cout << "Idade" << amigo.getIdade();


amigo.~Pessoa();
//cout << "ID " << amigo.id << endl;

//cout << "Nome " << amigo.nome << endl;
//cout << "IDADE " << amigo.idade << endl;



}