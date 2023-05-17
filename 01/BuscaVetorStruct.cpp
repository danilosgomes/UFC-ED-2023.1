#include <iostream>
#include <string>

using namespace std;

struct aluno{
  string nome;
  int id{0};
  double nota;
};

void confere_id(aluno user){
  if(user.id != 0){
    cout << user.nome << endl;
    cout << user.nota;
  }else 
    cout << "NÃO ENCONTRADO";
}

aluno dados(){
  cout.precision(1);
  aluno user;
  cin >> user.id;
  cin.ignore();
  getline(cin,user.nome);
  cin >> user.nota;

  return user;
}

aluno confere_user(aluno users[], int n, int id){
  int i{0};

  while(i <= n){
    if(users[i].id == id)
      return users[i];
    i++;
  }
}

int main(){
  aluno users[10];
  int n_users, id, i{0};
  cin >> n_users;

  while(i < n_users){
    users[i] = dados();
    i++;
  }

  cin >> id;

  aluno user = confere_user(users, n_users, id);
  confere_id(user);
}