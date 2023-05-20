#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(int n){ 
  int ftrl = 1;
  for(int i = 1; i <= n; i++){
    ftrl *= i; 
  }
  return ftrl;
}

double euler(int n){
  int aux = 0;
  double euler = 1;
  for(int i = 1; i <= n; i++){
    euler += 1/fatorial(i);
  }
  return euler;
}

int main(){
  int N;
  cin >> N;
  double euler_ = 0;
  euler_ += euler(N);
  cout << fixed << setprecision(6) <<  euler_;
}