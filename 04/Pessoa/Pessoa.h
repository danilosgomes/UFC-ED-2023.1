#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa {
private:
    int idade {34};
    std::string nome {"ana"};

public:
    // construtor default 
    Pessoa();
    // construtor com dois argumentos
    Pessoa(int i, std::string n);
    // construtor de cópia = copy constructor
    Pessoa(const Pessoa& pessoa);
    // Destrutor
    ~Pessoa();

    void print();
    // função que muda o nome da pessoa
    void setNome(std::string nome);
    // função que muda a idade da pessoa
    void setIdade(int idade);
    // retorna o nome da pessoa
    std::string getNome();
    // retorna a idade da pessoa
    int getIdade();
};
#endif