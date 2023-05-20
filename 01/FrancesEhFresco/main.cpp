#include <iostream>
using namespace std;

int main(){
    string frase;
    getline(cin,frase);
    int i = 0;

    while(i < (int) frase.length()){
      if(frase[i] == frase[i+2] && frase[i+1] ==' ' && (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' )){
            cout << frase[i];
            char aux = frase[i];
            while ((frase[i] == aux) || (frase[i] == ' ')){
              i++;
            }
          i--; 
      }else{
        cout << frase[i];
      }
      i++;
    }
}