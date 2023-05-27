#include <iostream>
#include "Pessoa.h"
using namespace std;

int main() {
    Pessoa pessoa;
    cout << "Digite o nome do cliente: ";
    string nome;
    getline(cin, nome);
    pessoa.setNome(nome);
    cout << "Digite a idade do cliente: ";
    int idade;
    cin >> idade;
    pessoa.setIdade(idade);
    pessoa.print();
}