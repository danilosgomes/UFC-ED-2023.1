#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void vet(vector<int>& novo, int size){
  if(size == 1){
    cout << novo[0] << " ";
  }else{
    vet(novo, size-1);
    cout << novo[size-1] << " ";
  }
}

void rvet(vector<int>& novo, int size){
  if(size == 1){
    cout << novo[0] << " ";
  }else{
    cout << novo[size-1] << " ";
    rvet(novo, size-1);
  }
}

int sum(vector<int> novo, int size){
  int soma {0};
  if(size == 1){
    soma = novo[0];
  }else{
    soma = novo[size-1] + sum(novo, size-1);
  }
  return soma;
}

int mult(vector<int> novo, int size){
  int mul {0};
  if(size == 1){
    mul = novo[0];
  }else{
    mul = novo[size-1] * mult(novo, size-1);
  }
  return mul;
}

int min(vector<int> novo, int size){
  int aux {0};
  if(size == 1){
    return novo[0];
  }else{
    aux = min(novo, size-1);
    if(novo[size-1] < aux){
      return novo[size-1];
    }else{
      return aux;
    }
  }
}

void inv(vector<int>& novo, int size){
  for (int i {0}; i < size; i++){
    int aux = novo[i];
    novo[i] = novo[size];
    novo[size] = aux;
    inv(novo, size--);
  }
}

int main(){
  string str;
  getline(cin, str);

  stringstream ss(str);
  vector <int> novo;
  int value;
    while (ss >> value){
      novo.push_back(value);
    }
  cout << "vet : [ ";
    vet(novo, (int )novo.size());
  cout << ']' << '\n';
  cout << "rvet: [ ";
    rvet(novo, (int )novo.size());
  cout << ']' << '\n';
  cout << "sum : " << sum(novo, (int )novo.size()) << '\n';
  cout << "mult: " << mult(novo, (int )novo.size()) << '\n';
  cout << "min : " << mult(novo, (int )novo.size()) << '\n';
  cout << "inv : [ ";
    inv(novo, (int)novo.size()-1);
    vet(novo, (int)novo.size());
  cout << ']' << '\n';
}