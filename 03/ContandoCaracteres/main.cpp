#include<iostream>
#include<string>


using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição..
int contaCaracteres(string str, int n, char c){
    // fazer
  int numC {};
  for(int i {}; i < n; i++){
    if(str[i] == c){
      numC++;
    }
  }
  return numC;
}

int main(){
   // fazer
  string str;
  getline(cin,str);
  char c {};
  cin >> c;
  cout << contaCaracteres(str, (int)str.size(), c);
}
