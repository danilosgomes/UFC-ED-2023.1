#include <iostream>

using namespace std;

struct aluno{
  int id;
  char nome[100], cadeira[120];
  double nota;
};

void nota(aluno user){
  if(user.nota >= 7)
    cout << user.nome << " aprovado(a) em " << user.cadeira;
  else
    cout << user.nome << " reprovado(a) em " << user.cadeira;
}

aluno dados(){
  cout.precision(1);
  aluno user;
  cin >> user.nome >> user.id;
  cin.ignore();
  cin >> user.cadeira >> user.nota;

  return user;
}

int main(){
  aluno user = dados();
  cin.ignore();
  nota(user);
}