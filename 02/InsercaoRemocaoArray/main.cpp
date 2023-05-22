#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct aluno{
  int matricula;
  char nome[50];
  float media;
};

aluno le_aluno(){
  aluno a;
  cin >> a.matricula;
  cin.ignore(); 
  cin.get(a.nome, 50);
  cin >> a.media;
  return a;
}

aluno* insere_aluno(aluno *alunos, int *n_alunos, aluno novo){
  aluno *sup = alunos;
  alunos = new aluno[*n_alunos+1];
  
  if(*n_alunos > 0){
    for (int i = 0; i < *n_alunos; i++){
      alunos[i] = sup[i];
    }
  }if(alunos == 0){
    cout << "erro" << endl;
    return 0;
  }

  alunos[*n_alunos] = novo;
  *n_alunos += 1;
  return alunos;
}

aluno* remove_aluno(aluno *alunos, int *n_alunos, int matricula){
  int i{0};
  while(i < *n_alunos){
      if(matricula == alunos[i].matricula){
          aluno *sup = alunos;
          alunos = new aluno[*n_alunos - 1];
          
          int q = 0;
          for(int x = 0; x < *n_alunos; x++){
              if(sup[x].matricula != matricula){
                alunos[q] = sup[x];
                q++;
              }
          }
          
        *n_alunos -= 1;
        break;
      }
    i++;
  }

  return alunos;
}

int main(){
  cout.precision(1);
  int num_oper, i, n_alunos{0};
  cin >> num_oper;
  aluno *alunos = new aluno[n_alunos];

  for (i = 0 ; i < num_oper; i++){
      cin.ignore();
      char oper;
      cin >> oper;
      if (oper == 'i'){
          aluno a = le_aluno();
          alunos = insere_aluno(alunos, &n_alunos, a);
      }else{
          int mat;
          cin >> mat;
          alunos = remove_aluno(alunos, &n_alunos, mat);
      }
  }
   for (int i = 0; i < n_alunos; i++){
    cout << alunos[i].matricula << endl;
    cout << alunos[i].nome << endl;
    cout << fixed << alunos[i].media << endl;
  }
  
  delete[] alunos;
  return 0;
}