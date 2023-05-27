#include <iostream>
#include <iomanip>

using namespace std;

struct aluno {
  float nota[3], media;
};

void calc_media(aluno *user){
  user -> media = ((user -> nota[0] + user -> nota[1] + user -> nota[2])/3);
}

void calc_media_turma(aluno turma[], int n){
  for(int i{0}; i < n; i++){
    calc_media(&turma[i]);
  }
}

int main(){
  cout.precision(1);
  int n, i, j{0};
  cin >> n;

  aluno turma[n];

  for (j = 0; j < n; j++){
    for (i = 0; i < 3; i++){
      cin >> turma[j].nota[i];
    }
  } 

  calc_media_turma(turma,n);

  for(j = 0; j < n; j++){
    cout << fixed << turma[j].media << " ";
  }  
}