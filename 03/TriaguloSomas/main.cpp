#include<iostream>
#include<string>

using namespace std;

int somaTriagulo(int *vet, int n){
  if(n == 1){
    cout << '[' << vet[n-1] << ']' << endl;
  }else{
    int vetA[n-1];
    for(int i {}; i < n; i++){
      vetA[i] = vet[i] + vet[i+1];
    }
    somaTriagulo(vetA, n-1);

    cout << '[';
    for(int i {}; i < n; i++){
      if(i > 0){
        cout << ", ";
      }
      cout << vet[i];
    }
    cout << ']';
  }
}

int main(){
  int n {};
  cin >> n;
  int vet[n];

    for(int i {}; i < n; i++){
      cin >> vet[i];
    }
  
  somaTriagulo(vet, n);
}