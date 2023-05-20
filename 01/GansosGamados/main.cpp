#include <iostream>
#include <sstream>

using namespace std;

int main(){
 string frase;
 getline(cin,frase);

 stringstream ss;
 ss << frase;

 string carcter;
 ss>>carcter;

 bool requisito = true;
 int i = 0;

 while(i < (int)frase.length()){
  if(frase.at(i) == ' '){ 
      if(i > 0){
        string aux;
        ss>>aux;
          if(carcter < aux)carcter = aux;
          else{
            requisito = false;
            break;
          }
      }
  }
  i++;
 }
 if(requisito)
  cout<<"sim";
 else
  cout<<"nao";


}