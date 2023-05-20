#include <iostream>

using namespace std;

struct aluno{
  int id;
  char nome[100], cadeira[120];
  double nota;
};

aluno dados(){
  aluno user;
  cin >> user.nome >> user.id;
  cin.ignore();
  cin >> user.cadeira >> user.nota;

  return user;
}

void maior(aluno user1, aluno user2){
  cout.precision(1);

  if(user1.nota == user2.nota)
    cout << user1.nome << " e " << user2.nome << " , " << fixed << user1.nota;
  else if(user1.nota < user2.nota)
    cout << user2.nome << " , " << fixed << user2.nota;
  else
    cout << user1.nome << " , " << fixed << user1.nota;
  
}

int main(){
  aluno user1 = dados();
  cin.ignore();
  aluno user2 = dados();
  cin.ignore();
  maior(user1,user2);
}


