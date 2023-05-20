#include <iostream>
using namespace std;

string Mai(string frase1){
  for(int i = 0; frase1[i] != '\0'; i++){
      if(frase1[i] >= 97 && frase1[i] <= 122){
          frase1[i] -= 32;
      }
  }
  cout << frase1;
}
string min(string frase1){
  for(int i = 0; frase1[i] != '\0'; i++){
    if(frase1[i] >= 65 && frase1[i] <= 90){
        frase1[i] += 32;
    }
  }
  cout << frase1;
}
string inte(string frase1){
    for(int i = 0; frase1[i] != '\0'; i++){
      if(frase1[i] >= 65 && frase1[i] <= 90){
          frase1[i] += 32;
      }else if(frase1[i] >= 97 && frase1[i] <= 122){
          frase1[i] -= 32;
      }
    }
  cout << frase1;
}
string pontu(string frase1){
  for(int i = 0; frase1[i] != '\0'; i++){
    if(i == 0){
        if(frase1[i] >= 65 && frase1[i] <= 90){
            frase1[i] += 32;
        }
    }else if(frase1[i - 1] == ' ' && frase1[i + 1] != ' '){
        if(frase1[i] >= 97){
            frase1[i] -= 32;
        }
    }  
  }
  cout << frase1;
}

int main(){
  char frase[101], letra;
  cin.get(frase,101);
  cin>>letra;

  if(letra == 'M'){
    Mai(frase);
  }else if(letra == 'm'){
    min(frase);
  }else if(letra == 'i'){
    inte(frase);
  }else if(letra == 'p'){
    pontu(frase);
  }
}

