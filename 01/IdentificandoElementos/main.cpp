#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string elementos(string frase){
  bool s, f;
  int i = 0;
  while (i < frase.length()){
    if(frase[i] >= 97 && frase[i] <= 122) s = true;
    if(frase[i] == '.') f = true;
  i++;
  }

  if(s) cout<<"str";
  else if(f) cout<<"float";
  else cout<<"int";
}

int main(){
  string frase;
  getline(cin,frase);

  stringstream caracter;
  caracter<<frase;
  int i = 0;

  while(i < frase.length()){
    string aux;
      if(i==0){
        caracter>>aux;
        cout<<elementos(aux);
      }else if(frase[i] == ' '){
        caracter >> aux;
        cout << " " << elementos(aux);
    }
  i++;
  }
}
