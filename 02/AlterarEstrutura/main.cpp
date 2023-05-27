#include <iostream>
#include <iomanip>

using namespace std;

struct aluno {
  float nota[3], media;
};

void calc_media(aluno *user){
  user -> media = ((user -> nota[0] + user -> nota[1] + user -> nota[2])/3);
}

int main(){
  cout.precision(1);
  aluno user;
  int i{0};
    while(i < 3){
      cin >> user.nota[i];
      i++;
    }
  calc_media(&user);

  cout << fixed << user.media;
}