//
// Created by miguel.carvalho on 22/06/2023.
//

//Miguel Henrique Martins Carvalho
//766634
#include<iostream>
#include<string>

using namespace std;

class Publicacao{
protected:
    string titulo;
    string autor;
    int ano;
public:

    Publicacao(string _titulo, string _autor, int _ano);

    void setTitulo(string _titulo);
    string getTitulo();

    void setAutor(string _autor);
    string getAutor();

    void setAno(int _ano);
    int getAno();

    virtual void mostra();
};

Publicacao::Publicacao(string _titulo, string _autor, int _ano) {
    titulo = _titulo;
    autor = _autor;
    ano = _ano;

}

void Publicacao::mostra() {

    cout << "Biblioteca :" << endl;
    cout << "Título" << titulo << endl;
    cout << "Autor" << autor << endl;
    cout << "Ano" << ano << endl;


}

void Publicacao::setTitulo(string _titulo)  {

    titulo = _titulo;

}

string Publicacao::getTitulo() {

    return titulo;
}

void Publicacao::setAno(int _ano) {

    ano = _ano;
}

int Publicacao::getAno() {
    return ano;
}


void Publicacao::setAutor(string _autor) {

    autor = _autor;
}
string Publicacao::getAutor() {

    return autor;
}



class Livro : public Publicacao{
private:
    int paginas;
public:
    Livro(string _titulo,string _autor, int _ano,int _paginas);

    void setPaginas(int _paginas);

    int getPaginas();

   virtual void mostra();

};

Livro::Livro(string _titulo, string _autor,int _ano,int _paginas) : Publicacao( _titulo, _autor, _ano){

paginas = _paginas;

}

void Livro::mostra() {

    Publicacao::mostra();

    cout << "Páginas" << paginas << endl;


}

void Livro::setPaginas(int _paginas) {

    paginas = _paginas;

}

int Livro::getPaginas() {

    return paginas;
}

class Revista : public Publicacao{
private:
    int edicao;

public:
    Revista(string _titulo,string _autor, int _ano,int _edicao);

    void setEdicao(int _edicao);
    int  getEdicao();

    void mostra();

};

Revista::Revista(string _titulo, string _autor, int _ano, int _edicao) : Publicacao( _titulo,_autor, _ano){


    edicao = _edicao;

}

void Revista::mostra() {


    cout << "Edicao" << edicao << endl;

}

void Revista::setEdicao(int _edicao) {
    Publicacao::mostra();
    edicao = _edicao;
}

int Revista::getEdicao() {

    return edicao;

}


class ItemEmprestado {
private:
    string dataEmprestimo;
    string dataDevolucao;
public:

      ItemEmprestado(string _dataEmprestimo,string _dataDevolucao);

    void setDataEmprestimo(string _data_emprestimo);

    string getDataEmprestimo();


    void setDataDevolucao(string _data_devolucao);

    string getDataDevolucao();


};


ItemEmprestado::ItemEmprestado(string _dataEmprestimo, string _dataDevolucao) {

    dataEmprestimo = _dataEmprestimo;
    dataDevolucao = _dataDevolucao;

}


void ItemEmprestado::setDataEmprestimo(string _dataEmprestimo) {

    dataEmprestimo = _dataEmprestimo;

}

string  ItemEmprestado::getDataEmprestimo() {

    return dataEmprestimo;
}

void ItemEmprestado::setDataDevolucao(string _dataDevolucao) {

    dataDevolucao = _dataDevolucao;

}

string  ItemEmprestado::getDataDevolucao(){

return dataDevolucao;

}

class LivroEmprestado : public Livro, public ItemEmprestado{


public :
    LivroEmprestado(string _titulo, string _autor,int _ano,int _paginas,string _dataEmprestimo, string _dataDevolucao)
    : Livro(_titulo, _autor,_ano,_paginas), ItemEmprestado(_dataEmprestimo, _dataDevolucao){

    }

};


class RevistaEmprestada : public Revista, public ItemEmprestado{


public :
    RevistaEmprestada(string _titulo, string _autor,int _ano,int _edicao,string _dataEmprestimo, string _dataDevolucao)
            : Revista(_titulo, _autor,_ano,_edicao), ItemEmprestado(_dataEmprestimo, _dataDevolucao){

    }

};

int main(){

    Revista revista = Revista("Revista M","Tereza",2022,19);

    Livro livro = Livro ("Livro A","Autor Miguel", 2023,200);

    revista.mostra();

    livro.mostra();

    return 0;


}