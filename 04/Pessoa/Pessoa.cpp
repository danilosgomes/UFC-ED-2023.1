#include <iostream>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa() {
    std::cout << "pessoa criada no construtor default" << endl;
}

Pessoa::Pessoa(int i, string n) {
    std::cout << "pessoa criada no construtor com dois argumentos" << endl;
    this->idade = i;
    this->nome = n;
}

Pessoa::Pessoa(const Pessoa& pessoa) {
    std::cout << "pessoa criada no construtor de cópia" << endl;
    this->idade = pessoa.idade;
    this->nome = pessoa.nome;
}

Pessoa::~Pessoa() {
    std::cout << "pessoa morreu" << std::endl;
}

void Pessoa::print() {
    std::cout << idade << ", " << nome << std::endl;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getIdade() {
    return this->idade;
}