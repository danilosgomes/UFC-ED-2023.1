// Arquivo de Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"
using namespace std;

// Aloca espaco dinamicamente para matriz com m linhas e n colunas
Matriz::Matriz(int m, int n) {
	this -> lin = m;
	this -> col = n;
	this -> mat = new int* [m];

    for (int i {0}; i < m; i++){
        mat[i] = new int[n];
    }
}   

// Destrutor: Libera a memoria que foi alocada dinamicamente no construtor
Matriz::~Matriz() {
	for(int i {0}; i < this -> lin; i++){
		delete[] mat[i];
	}
	delete[] mat;
	cout << "matriz liberada" << endl;
}   

// Retorna o numero de linhas da matriz
int Matriz::linhas() {
	return this -> lin;
} 

// Retorna o numero de colunas da matriz
int Matriz::colunas() { 
	return this -> col;
}

// Retorna o valor da celula [i][j] da matriz
int Matriz::getValor(int i, int j) {
	return this -> mat[i][j];
} 

// Atribui valor a celula [i][j] da matriz
void Matriz::setValor(int valor, int i, int j) {
	this -> mat[i][j] = valor;
}

// Imprimir a matriz 
void Matriz::print() {
    for(int i = 0; i < lin; ++i) {
	for(int j = 0; j < col; ++j) {
		cout << setw(7) << mat[i][j];
	}
	cout << "\n";
	}
} 

// Soma matrizes
Matriz *Matriz::soma(Matriz& B) {
	Matriz* aux = new Matriz(this -> lin, this -> col);

	if(B.lin == this->lin && B.col == this->col){
		for(int i {0}; i < this -> lin; i++) {
			for (int j {0}; j < this -> col; j++) {
				aux -> mat[i][j] = B.mat[i][j] + this -> mat[i][j];
			}
		}
		return aux;
	}
}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz& B){
	if(this -> col == B.lin){
		Matriz* aux = new Matriz(this->lin, B.col);
				
		for (int i {0}; i < aux -> lin; i++){
			for (int j {0}; j < aux -> col; j++){
				aux -> mat[i][j] = 0;
				for(int k {0}; k < this -> lin; k++){
					aux -> mat[i][j] += this -> mat[i][k] * B.mat[k][j];
				}
			}
		}
		return aux;
	}
}
